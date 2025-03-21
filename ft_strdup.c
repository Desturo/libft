/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 15:18:18 by nschneid          #+#    #+#             */
/*   Updated: 2025/03/21 16:08:42 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strdup(const char *s1)
{
	size_t	slen;
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

int	main(void)
{
	char	*str;
	char	*str2;

	str = "test";
	str2 = (char *)ft_strdup(str);
	printf("%s\n", str2);
	return (0);
}
