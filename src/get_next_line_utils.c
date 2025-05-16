/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:33:01 by nschneid          #+#    #+#             */
/*   Updated: 2025/05/16 16:15:09 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "helper.h"

void	free_list(t_gnl_list *head)
{
	t_gnl_list	*tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

size_t	line_len(t_gnl_list *head)
{
	size_t	total_len;
	size_t	i;

	total_len = 0;
	while (head)
	{
		i = 0;
		while (head->content[i])
		{
			total_len++;
			if (head->content[i] == '\n')
				return (total_len);
			i++;
		}
		head = head->next;
	}
	return (total_len);
}

t_gnl_list	*get_last_node(t_gnl_list *head)
{
	t_gnl_list	*current;

	if (!head)
		return (NULL);
	current = head;
	while (current->next)
		current = current->next;
	return (current);
}

int	contains_nl(char *str)
{
	while (*str)
	{
		if (*str == '\n')
			return (1);
		str++;
	}
	return (0);
}

void	clear_buffer(char *buffer)
{
	int	idx;

	idx = 0;
	while (idx < BUFFER_SIZE + 1)
		buffer[idx++] = 0;
}
