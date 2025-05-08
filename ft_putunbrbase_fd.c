/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbrbase_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 13:29:32 by nschneid          #+#    #+#             */
/*   Updated: 2025/05/08 14:08:07 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	udigc(unsigned long long nbr, int nbr_base);
static char	*fill_ubuffer(unsigned long long nbr, char *base, int nbr_base);
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

static int	udigc(unsigned long long nbr, int nbr_base)
{
	int	out;

	out = 0;
	if (nbr == 0)
		return (1);
	while (nbr)
	{
		nbr /= (unsigned long long)nbr_base;
		out++;
	}
	return (out);
}

static char	*fill_ubuffer(unsigned long long nbr, char *base, int nbr_base)
{
	int		size;
	char	*buffer;

	size = udigc(nbr, nbr_base);
	buffer = malloc((size + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	buffer[size] = 0;
	size--;
	while (nbr > 0)
	{
		buffer[size--] = base[nbr % nbr_base];
		nbr /= nbr_base;
	}
	return (buffer);
}

int	ft_putunbrbase_fd(unsigned long long nbr, char *base, int fd)
{
	int		nbr_base;
	char	*buffer;
	int		idx;

	nbr_base = ft_strlen(base);
	if (!ft_valid_input(nbr_base, base))
		return (-1);
	if (nbr == 0)
		return (write(1, &(base[0]), 1));
	buffer = fill_ubuffer(nbr, base, nbr_base);
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
