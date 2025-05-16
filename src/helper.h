/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 16:01:31 by nschneid          #+#    #+#             */
/*   Updated: 2025/05/16 16:15:50 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPER_H
# define HELPER_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

typedef struct gnl_list
{
	char			content[BUFFER_SIZE + 1];
	struct gnl_list	*next;
	int				contains_nl;
}					t_gnl_list;

int					ft_printx(int num);
int					ft_printcapsx(int num);
int					ft_printp(void *ptr);
int					ft_printdi(int num);
int					ft_printu(int num);

void				free_list(t_gnl_list *head);
size_t				line_len(t_gnl_list *head);
t_gnl_list			*get_last_node(t_gnl_list *head);
t_gnl_list			*create_and_read_node(int fd, int *chars_read);
int					fill_list(t_gnl_list **head, int fd);
char				*extract_line(t_gnl_list *head, char *buffer);
int					read_buffer(t_gnl_list **head, char *buffer);
int					contains_nl(char *str);
void				clear_buffer(char *buffer);

#endif
