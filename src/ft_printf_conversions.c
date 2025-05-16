/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_conversions.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 12:33:35 by nschneid          #+#    #+#             */
/*   Updated: 2025/05/16 16:04:02 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "helper.h"

int	ft_printx(int num)
{
	return (ft_putunbrbase_fd((unsigned int)num, "0123456789abcdef", 1));
}

int	ft_printcapsx(int num)
{
	return (ft_putunbrbase_fd((unsigned int)num, "0123456789ABCDEF", 1));
}

int	ft_printp(void *ptr)
{
	int	output;

	output = write(1, "0x", 2);
	if (output == -1)
		return (-1);
	output += ft_putunbrbase_fd((uintptr_t)ptr, "0123456789abcdef", 1);
	if (output == 1)
		return (-1);
	return (output);
}

int	ft_printdi(int num)
{
	return (ft_putnbrbase_fd(num, "0123456789", 1));
}

int	ft_printu(int num)
{
	return (ft_putunbrbase_fd((unsigned int)num, "0123456789", 1));
}
