/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 14:05:48 by nschneid          #+#    #+#             */
/*   Updated: 2025/03/23 14:06:27 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	digc(long *n, int *sign)
{
	int		out;
	long	num;

	num = *n;
	out = 0;
	if (*n == 0)
		return (1);
	if (*n < 0)
	{
		*n *= -1;
		*sign = -1;
		out++;
	}
	while (num)
	{
		num /= 10;
		out++;
	}
	return (out);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		c;
	char	*out;
	int		sign;
	long	nbr;

	nbr = (long)n;
	sign = 1;
	c = digc(&nbr, &sign);
	out = ft_calloc(c + 1, sizeof(char));
	if (!out)
		return ;
	if (sign < 0)
		out[0] = '-';
	c--;
	if (nbr == 0)
	{
		out[0] = '0';
		return ;
	}
	while (nbr)
	{
		out[c--] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return ;
}

//int	main(void)
//{
//	ft_putnbr_fd(0, 1);
//}
