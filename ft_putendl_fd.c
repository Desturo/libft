/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 13:59:58 by nschneid          #+#    #+#             */
/*   Updated: 2025/05/08 14:08:07 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putendl_fd(char *s, int fd)
{
	int	out;

	out = ft_putstr_fd(s, fd);
	if (out == -1)
		return (-1);
	if (write(fd, "\n", 1) == -1)
		return (-1);
	return (out + 1);
}
