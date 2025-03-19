/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 12:43:16 by nschneid          #+#    #+#             */
/*   Updated: 2025/03/19 13:22:49 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	while (len > 0)
	{
		len--;
		((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
	}
	return (dst);
}

//int	main()
//{
//	char str[11] = "0123456789";
//	printf("%s\n", (char *)ft_memmove(str+3, str, 5));
//	return (0);
//}
