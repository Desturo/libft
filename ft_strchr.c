/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 17:02:20 by nschneid          #+#    #+#             */
/*   Updated: 2025/03/19 18:53:38 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == (char)c)
			return ((char *)(s + i));
	return (NULL);
}

//int	main()
//{
//	char str[] = "teser";
//	printf("%s\n", ft_strchr(str, 't' + 256));
//	printf("%s\n", strchr(str, 't' + 256));
//	return (0);
//}
