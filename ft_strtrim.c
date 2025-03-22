/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 15:43:38 by nschneid          #+#    #+#             */
/*   Updated: 2025/03/22 16:19:17 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	in_set(const char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, char const *set)
{
	int		i;
	char	*out;

	if (*s1 == 0)
		return (ft_calloc(1, 1));
	while (in_set(*s1, set) && *s1)
		s1++;
	if (!*s1)
		return (ft_calloc(1, 1));
	i = ft_strlen(s1) - 1;
	while (in_set(s1[i], set))
		i--;
	out = ft_calloc(i + 2, sizeof(char));
	if (!out)
		return (NULL);
	while (i >= 0)
	{
		out[i] = s1[i];
		i--;
	}
	return (out);
}

//int	main(void)
//{
//	char	*str;
//	char	*set;
//
//	str = "   \n  \n  \t  ";
//	set = " \n\t";
//	printf("%s\n", ft_strtrim(str, set));
//	return (0);
//}
