/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:38:23 by nschneid          #+#    #+#             */
/*   Updated: 2025/03/13 19:00:42 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*memset(void *b, int c, size_t len)
{
	size_t i;
	i = 0;

	while(i < len)
	{
		d[i] = (unsigend char)c;
		i++;
	}
}
