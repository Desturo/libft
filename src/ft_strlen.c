/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 17:33:26 by nschneid          #+#    #+#             */
/*   Updated: 2025/05/08 14:08:06 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	out;

	out = 0;
	while (s[out])
		out++;
	return (out);
}

// int main()
//{
//	char str[] = "Hello, 42!";
//	printf("%zu\n", ft_strlen(str));
//	return (0);
//}
