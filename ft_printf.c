/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:21:54 by nschneid          #+#    #+#             */
/*   Updated: 2025/05/08 14:08:07 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	convert(const char **str, va_list args);

static int	convert(const char **str, va_list args)
{
	(*str)++;
	if (**str == 's')
		return (ft_putstr_fd(va_arg(args, char *), 1));
	else if (**str == 'x')
		return (ft_printx(va_arg(args, int)));
	else if (**str == 'X')
		return (ft_printcapsx(va_arg(args, int)));
	else if (**str == 'p')
		return (ft_printp(va_arg(args, void *)));
	else if (**str == 'd' || **str == 'i')
		return (ft_printdi(va_arg(args, int)));
	else if (**str == 'u')
		return (ft_printu(va_arg(args, int)));
	else if (**str == 'c')
		return (ft_putchar_fd(va_arg(args, int), 1));
	else if (**str == '%')
		return (write(1, "%", 1));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		output;
	int		printed;

	va_start(args, str);
	output = 0;
	while (*str)
	{
		if (*str == '%')
			printed = convert(&str, args);
		else
			printed = write(1, str, 1);
		if (printed == -1)
			return (-1);
		else
			output += printed;
		str++;
	}
	va_end(args);
	return (output);
}
