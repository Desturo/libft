/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 17:24:29 by nschneid          #+#    #+#             */
/*   Updated: 2025/03/19 17:45:22 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if ((s1[i] == 0 || s2[i] == 0) && s1[i] != s2[i])
		return (s1[i] - s2[i]);
	return (0);
}

//int	main()
//{
//	char	s1[] = "a1b2c3";
//	char	s2[] = "a1b2c3d4";
//	printf("%d\n", ft_strncmp(s1, s2, 11));
//	return (0);
//}
