/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftgc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 19:13:03 by nschneid          #+#    #+#             */
/*   Updated: 2025/12/04 19:57:58 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/internal/ft_gc_intertal.h"
#include "../../include/libft.h"

t_ftgc	*ftgc_init(void)
{
	t_ftgc	*gc;

	gc = NULL;
	gc = w_malloc(gc, sizeof(t_ftgc));
	gc->head = NULL;
	gc->tail = NULL;
	gc->size = 0;
	return (gc);
}

void	w_exit(int exit_code, t_ftgc *gc, char *error_msg)
{
	if (error_msg)
		ft_printf("Error: %s\n", error_msg);
	ftgc_clear(gc);
	exit(exit_code);
}

void	ftgc_clear(t_ftgc *gc)
{
	t_ftgc_item	*current;
	t_ftgc_item	*next;

	if (!gc)
		return ;
	current = gc->tail;
	while (current)
	{
		next = current->prev;
		free(current->ptr);
		free(current);
		current = next;
	}
	free(gc);
}
void	*ftgc_malloc(t_ftgc *gc, size_t size)
{
	void	*ptr;

	ptr = w_malloc(gc, size);
	add_to_bin(gc, ptr);
	return (ptr);
}
