/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 13:27:00 by nschneid          #+#    #+#             */
/*   Updated: 2025/03/19 13:48:21 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;

	i = 0;
	srclen = ft_strlen((char *)src);
	if (dstsize == 0)
		return (srclen);
	else if (dstsize == 1)
	{
		dst[0] = 0;
		return (srclen);
	}
	while (i < dstsize - 1 && src[i] != 0)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (srclen);
}

//#include <string.h>
//int	main(void)
//{
//	char	dst[20];
//	char	src[] = "123456789";
//	printf("%zu\n", strlcpy(dst, src, 2));
//	printf("%s\n", dst);
//	return (0);
//}
