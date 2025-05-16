/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:33:13 by nschneid          #+#    #+#             */
/*   Updated: 2025/05/16 16:17:35 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "helper.h"

char	*extract_line(t_gnl_list *head, char *buffer)
{
	char	*output;
	size_t	idx_out;
	size_t	idx_node;
	size_t	idx_buffer;

	output = malloc(line_len(head) + 1);
	if (!output)
		return (NULL);
	idx_out = 0;
	idx_buffer = 0;
	while (head)
	{
		idx_node = 0;
		while (head->content[idx_node] && head->content[idx_node] != '\n')
			output[idx_out++] = head->content[idx_node++];
		if (head->content[idx_node] == '\n')
			output[idx_out++] = head->content[idx_node++];
		if (!head->next)
		{
			while (head->content[idx_node])
				buffer[idx_buffer++] = head->content[idx_node++];
		}
		head = head->next;
	}
	return (output[idx_out] = 0, output);
}

int	read_buffer(t_gnl_list **head, char *buffer)
{
	int	idx;

	idx = 0;
	if (!buffer || !buffer[0])
		return (1);
	*head = malloc(sizeof(t_gnl_list));
	if (!*head)
		return (-1);
	(*head)->contains_nl = 0;
	while (buffer[idx])
	{
		(*head)->content[idx] = buffer[idx];
		if (buffer[idx] == '\n')
			(*head)->contains_nl = 1;
		buffer[idx] = '\0';
		idx++;
	}
	(*head)->content[idx] = '\0';
	(*head)->next = NULL;
	return (1);
}

t_gnl_list	*create_and_read_node(int fd, int *chars_read)
{
	t_gnl_list	*node;

	node = malloc(sizeof(t_gnl_list));
	if (!node)
		return (NULL);
	node->next = NULL;
	node->contains_nl = 0;
	*chars_read = read(fd, node->content, BUFFER_SIZE);
	if (*chars_read <= 0)
	{
		free(node);
		return (NULL);
	}
	node->content[*chars_read] = '\0';
	node->contains_nl = contains_nl(node->content);
	return (node);
}

int	fill_list(t_gnl_list **head, int fd)
{
	t_gnl_list	*new_node;
	int			found_nl;
	int			chars_read;

	found_nl = 0;
	if (*head)
		found_nl = (*head)->contains_nl;
	while (!found_nl)
	{
		new_node = create_and_read_node(fd, &chars_read);
		if (!new_node)
		{
			if (chars_read == 0)
				return (0);
			return (free_list(*head), -1);
		}
		if (!*head)
			*head = new_node;
		else
			get_last_node(*head)->next = new_node;
		found_nl = new_node->contains_nl;
		if (chars_read < BUFFER_SIZE)
			return (1);
	}
	return (1);
}

char	*get_next_line(int fd)
{
	static char	buffer[1024][BUFFER_SIZE + 1];
	t_gnl_list	*head;
	int			idx;
	char		*output;

	idx = 0;
	head = NULL;
	if (BUFFER_SIZE < 1 || fd < 0 || fd > 1024)
		return (NULL);
	if (read_buffer(&head, buffer[fd]) == -1)
		return (NULL);
	if (fill_list(&head, fd) == -1)
		return (clear_buffer(buffer[fd]), NULL);
	if (!head)
		return (NULL);
	output = extract_line(head, buffer[fd]);
	return (free_list(head), output);
}
