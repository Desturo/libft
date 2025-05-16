/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 15:18:18 by nschneid          #+#    #+#             */
/*   Updated: 2025/03/21 16:11:46 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strdup(const char *s1)
{
	int		slen;
	char	*out;

	slen = ft_strlen(s1);
	out = ft_calloc(slen + 1, sizeof(char));
	if (!out)
		return (NULL);
	slen--;
	while (slen >= 0)
	{
		out[slen] = s1[slen];
		slen--;
	}
	return (out);
}

// int	main(void)
//{
//	char	*str = ft_strdup((char *)"abcde");
//	//char	*str2;
//	//str = "test";
//	// str2 = ft_strdup((char *)"abcde");
//	printf("%s\n", str);
//	free(str);
//	return (0);
//}
