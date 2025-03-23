/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 18:06:11 by nschneid          #+#    #+#             */
/*   Updated: 2025/03/22 20:45:53 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*freewords(char **arr, int i)
{
	while (i >= 0)
	{
		free(arr[i]);
		i--;
	}
	free(arr);
	return (NULL);
}

int	wordlen(const char *s, char c)
{
	int	out;

	out = 0;
	while (s[out] != c && s[out])
		out++;
	return (out);
}

void	*putwords(char **out, const char *s, char c, int len)
{
	int		i;
	int		j;
	char	*in;

	i = 0;
	while (i < len)
	{
		j = 0;
		while (*s == c && *s)
			s++;
		if (!*s)
			return (NULL);
		in = (char *)ft_calloc(wordlen(s, c) + 1, sizeof(char));
		if (!in)
			return (freewords(out, i));
		while (*s != c && *s)
			in[j++] = *s++;
		in[j] = 0;
		out[i++] = in;
	}
	return (out);
}

int	wordcount(const char *s, char c)
{
	int	out;

	out = 0;
	if (!*s)
		return (1);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
			out++;
		while (*s != c && *s)
			s++;
	}
	return (out);
}

char	**ft_split(char const *s, char c)
{
	int		len;
	char	**out;

	if (!*s)
	{
		out = (char **)ft_calloc(1, sizeof(void *));
		if (!out)
			return (NULL);
		out[0] = NULL;
		return (out);
	}
	len = wordcount(s, c);
	out = (char **)ft_calloc(len + 1, sizeof(char *));
	if (!out)
		return (NULL);
	out[len] = NULL;
	if (!putwords(out, s, c, len))
		return (NULL);
	return (out);
}

//int	main(void)
//{
//	char	sep;
//	char	*s;
//	char	**out;
//
//	s = "";
//	sep = 'a';
//	out = ft_split(s, sep);
//	if (!out)
//		return (1);
//	while (*out)
//		printf("%s\n", *out++);
//	return (0);
//}
