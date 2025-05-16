/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 13:23:09 by nschneid          #+#    #+#             */
/*   Updated: 2025/03/22 14:26:49 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*out;
	size_t	outlen;
	size_t	i;

	if (ft_strlen(s) <= start)
		return (ft_calloc(1, 1));
	s += start;
	outlen = ft_strlen(s);
	if (outlen > len)
		outlen = len;
	out = ft_calloc(outlen + 1, sizeof(char));
	if (!out)
		return (NULL);
	i = 0;
	while (i < outlen)
	{
		out[i] = s[i];
		i++;
	}
	return (out);
}

//int	main(void)
//{
//	char	*str;
//	size_t	size;
//	size_t	start;
//	char	*out;
//
//	str = "01234";
//	size = 4;
//	start = 2;
//	out = ft_substr(str, start, size);
//	printf("%s\n", out);
//	free(out);
//	return (0);
//}
