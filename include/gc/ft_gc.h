/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gc.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 18:57:42 by nschneid          #+#    #+#             */
/*   Updated: 2025/12/04 20:01:17 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GC_H
# define FT_GC_H

#include <unistd.h>

typedef struct s_ftgc t_ftgc;
typedef struct s_ftgc_item t_ftgc_item;

/**
 * @brief	Initiates a garbage collector struct.
 *
 * Allocate memory for the meta struct of the gc linked list.
 *  This function utilizes a wrapper arund malloc (ft_malloc).
 *
 * @return An address to a newly creted garbage collector meta struct.
 */
t_ftgc	*ftgc_init(void);

/**
 * @brief	Runs malloc and saves the allocation for later freeing by the gc
 *
 * Saves the address of the allocated memory into a doubly linked list
 * that can later be freed from the bottom up, requiring only a single
 * function call (@ref clear_trash)
 *
 * @param tb	The address of the trash bin to save the allocated
 *				item to.
 * @param size	The size of the area to be allocated in memory
 *
 * @return A pointer to the area in memory, that gets allocated
 */
void	*ftgc_malloc(t_ftgc *gc, size_t size);

/**
 * @brief frees just the item containig the pointer given.
 *
 * @param ptr	The pointer to free
 * @param tb	The garbage collector to free out of
 */
void	ftgc_free(void *ptr, t_ftgc *tb);

/**
 * @brief A exit function that prints an error and clears the gc.
 *
 * The message will be printed with a leading "Error: ".
 *
 * @param exit_code	The code with which the program should exit.
 * @param gc	A reference to a garbage collector that will be freed on exit.
 */
void	w_exit(int exit_code, t_ftgc *gc, char *error_msg);

/**
 * @brief	Frees every address added by the garbage collector.
 *
 * @param gc	A reference to the gc to be cleared.
 */
void	ftgc_clear(t_ftgc *gc);

#endif
