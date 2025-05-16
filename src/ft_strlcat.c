/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:22:28 by nschneid          #+#    #+#             */
/*   Updated: 2025/03/19 16:41:51 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen((char *)src);
	i = 0;
	if (dstsize <= dstlen)
		return (dstsize + srclen);
	while (src[i] && dstlen + i < dstsize - 1)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = 0;
	return (dstlen + srclen);
}

//#include <string.h>
//int	main(void)
//{
//	char	dst[11] = "I love ";
//	char	src[] = "42!";
//	printf("%zu\n", strlcat(dst, src, 14));
//	printf("%s\n", dst);
//	return (0);
//}
