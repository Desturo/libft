/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 14:17:52 by nschneid          #+#    #+#             */
/*   Updated: 2025/07/18 14:54:07 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_sqrt(int x)
{
	int		l;
	int		r;
	long	m;
	int		res;

	l = 0;
	r = x;
	res = 0;
	while (l <= r)
	{
		m = l + ((r - l) / 2);
		if (m * m > x)
			r = m - 1;
		else if (m * m < x)
		{
			l = m + 1;
			res = m;
		}
		else
			return (m);
	}
	return (res);
}
