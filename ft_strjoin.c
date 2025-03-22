/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 15:01:49 by nschneid          #+#    #+#             */
/*   Updated: 2025/03/22 15:13:34 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;

	out = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	while (*s1)
		*out++ = *s1++;
	while (*s2)
		*out++ = *s2++;
	return (out);
}
