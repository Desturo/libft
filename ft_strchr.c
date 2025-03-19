/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 17:02:20 by nschneid          #+#    #+#             */
/*   Updated: 2025/03/19 17:14:34 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == c)
			return ((char *)(s + i));
	return (NULL);
}

//int	main()
//{
//	char str[] = "1234567890";
//	char c = 'g';
//	printf("%s\n", ft_strchr(str, c));
//	return (0);
//}
