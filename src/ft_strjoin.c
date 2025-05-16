/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 15:01:49 by nschneid          #+#    #+#             */
/*   Updated: 2025/03/22 16:17:25 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	out = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	i = 0;
	if (!out)
		return (NULL);
	while (*s1)
		out[i++] = *s1++;
	while (*s2)
		out[i++] = *s2++;
	return (out);
}

//int	main(void)
//{
//	char	*s1;
//	char	*s2;
//
//	s1 = NULL;
//	s2 = NULL;
//	printf("%s\n", ft_strjoin(s1, s2));
//	return (0);
//}
