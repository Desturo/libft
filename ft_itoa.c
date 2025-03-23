/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 11:25:08 by nschneid          #+#    #+#             */
/*   Updated: 2025/03/23 12:57:54 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//get amount of digits in number
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

char	*ft_itoa(int n)
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
		return (NULL);
	if (sign < 0)
		out[0] = '-';
	c--;
	if (nbr == 0)
	{
		out[0] = '0';
		return (out);
	}
	while (nbr)
	{
		out[c--] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (out);
}

//int	main(void)
//{
//	int	n;
//
//	n = 0;
//	printf("%s\n", ft_itoa(n));
//	return (0);
//}
