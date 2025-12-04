/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gc_intertal.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 19:00:09 by nschneid          #+#    #+#             */
/*   Updated: 2025/12/04 19:48:36 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GC_INTERNAL_H
# define  FT_GC_INTERNAL_H

#include "../gc/ft_gc.h"

struct s_ftgc
{
	struct s_ftgc_item	*head;
	struct s_ftgc_item	*tail;
	size_t				size;
};

struct	s_ftgc_item
{
	void *ptr;
	struct s_ftgc_item	*next;
	struct s_ftgc_item	*prev;
};

/**
 * @brief	Allocates memory and exits safely on failure.
 *
 * @warning	This memory this function allocates does not get safed in the gc.
 *			 If you want to allocate to the gc use ftgc_malloc().
 *
 * @param gc	A reference to a garbage collector that will be freed on
 *				 failure.
 * @param size	The number of bytes to allocate.
 *
 * @return	A pointer to the location of the allocated memory.
 */
void	*w_malloc(t_ftgc *gc, size_t size);
#endif
