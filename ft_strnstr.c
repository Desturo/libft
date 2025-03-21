/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 09:50:26 by nschneid          #+#    #+#             */
/*   Updated: 2025/03/21 10:37:06 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == 0)
		return ((char *)haystack);
	while ((i < len) && haystack[i])
	{
		j = 0;
		while ((haystack[i + j] == needle[j]) && (i + j < len))
		{
			if (needle[j + 1] == '\0')
			{
				return ((char *)haystack + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
//{
//	char haystack[] = "abcdefghij";
//	char needle[] = "abc";
//
//	printf("%s\n", ft_strnstr(haystack, needle, 2));
//	return (0);
//}
