/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 18:06:11 by nschneid          #+#    #+#             */
/*   Updated: 2025/03/22 20:44:56 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	wordlen(const char *s, char c)
{
	int	out;

	out = 0;
	while (s[out] != c && s[out])
		out++;
	return (out);
}

void	putwords(char **out, const char *s, char c)
{
	int		i;
	int		j;
	char	*in;

	i = 0;
	while (*s)
	{
		j = 0;
		while (*s == c && *s)
			s++;
		if (!*s)
			return ;
		in = (char *)ft_calloc(wordlen(s, c) + 1, sizeof(char));
		if (!in)
		{
			while (i >= 0)
				free((void *)out[i--]);
			return (free(in));
		}
		while (*s != c && *s)
			in[j++] = *s++;
		in[j] = 0;
		out[i++] = in;
	}
	out[i] = NULL;
}

int	wordcount(const char *s, char c)
{
	int	out;

	out = 0;
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

char	**ft_split(const char *s, char c)
{
	int		len;
	char	**out;

	len = wordcount(s, c);
	if (!len)
		return (NULL);
	out = (char **)ft_calloc(len + 1, sizeof(char *));
	if (!out)
		return (NULL);
	out[len] = NULL;
	putwords(out, s, c);
	return (out);
}

int	main(void)
{
	char	sep;
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;
	char	**out;

	sep = 'a';
	s1 = "  test1     test2 test3   ";
	s2 = "";
	s3 = "test";
	s4 = "test";
	out = ft_split(s2, sep);
	if (!out)
		return (1);
	while (*out)
		printf("%s\n", *out++);
	return (0);
}
