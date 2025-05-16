/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 13:29:49 by nschneid          #+#    #+#             */
/*   Updated: 2025/05/08 14:08:07 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static int	digc(long long *n, int *is_negative, int nbr_base);
static char	*fill_buffer(long long num, char *base);
static int	ft_valid_input(int nbr_base, char *base);

static int	ft_valid_input(int nbr_base, char *base)
{
	int	idx;
	int	duplicate_idx;

	duplicate_idx = 1;
	idx = 0;
	if (nbr_base < 2)
		return (0);
	while (base[idx])
	{
		if (base[idx] == ' ' || (base[idx] >= 9 && base[idx] <= 13)
			|| base[idx] == '-' || base[idx] == '+')
			return (0);
		while (base[duplicate_idx])
		{
			if (base[idx] == base[duplicate_idx])
				return (0);
			duplicate_idx += 1;
		}
		idx++;
		duplicate_idx = idx + 1;
	}
	return (1);
}

static int	digc(long long *n, int *is_negative, int nbr_base)
{
	int		out;
	long	num;

	num = *n;
	out = 0;
	if (*n == 0)
		return (1);
	if (*n < 0)
	{
		*is_negative = 1;
		out++;
	}
	else
	{
		*n *= -1;
	}
	while (num)
	{
		num /= nbr_base;
		out++;
	}
	return (out);
}

static char	*fill_buffer(long long num, char *base)
{
	int		is_negative;
	int		size;
	int		nbr_base;
	char	*buffer;

	is_negative = 0;
	nbr_base = ft_strlen(base);
	size = digc(&num, &is_negative, nbr_base);
	buffer = malloc((size + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	buffer[size] = 0;
	size--;
	while (num < 0)
	{
		buffer[size--] = base[(num % nbr_base) * -1];
		num /= nbr_base;
	}
	if (is_negative)
		buffer[size] = '-';
	return (buffer);
}

/**
 * @brief Prints a number in a spcific numeral system.
 *
 * @param nbr The number that gets printed.
 * @param base A string of characters that describe the numeral system.
 * @return The number of bytes printed or -1 if the printing failed.
 */
int	ft_putnbrbase_fd(long long nbr, char *base, int fd)
{
	int		nbr_base;
	char	*buffer;
	int		idx;

	nbr_base = ft_strlen(base);
	if (!ft_valid_input(nbr_base, base) || fd < 1)
		return (-1);
	if (nbr == 0)
		return (write(1, &(base[0]), 1));
	buffer = fill_buffer((long long)nbr, base);
	if (!buffer)
		return (-1);
	idx = 0;
	while (buffer[idx])
	{
		if (write(fd, &buffer[idx++], 1) == -1)
		{
			free(buffer);
			return (-1);
		}
	}
	free(buffer);
	return (idx);
}
