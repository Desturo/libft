/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 18:06:11 by nschneid          #+#    #+#             */
/*   Updated: 2025/03/22 19:07:49 by nschneid         ###   ########.fr       */
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

int	putwords(const char **out, const char *s, char c)
{
	int len;
	int	i;
	char *in;

	len = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		len = wordlen(s, c);
		in = (char *)ft_calloc(len + 1, sizeof(char));
		while (*s != c && *s)
			*in++ = *s++;
		*in = 0;
		*out++ = in;
	}
	*out = 0;
	return (1);
}

	int wordcount(const char *s, char c)
	{
		int out;

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

	char **ft_split(const char *s, char c)
	{
		int len;
		char **out;

		len = wordcount(s, c);
		if (!len)
			return (NULL);
		//{
		//	out = (char **)ft_calloc(1, sizeof(char *));
		//	out[0] = NULL;
		//	return (out);
		//}
		out = (char **)ft_calloc(len + 1, sizeof(char *));
		if (!out)
			return (NULL);
		putwords(out, s, c);
		return (out);
	}

	int main(void)
	{
		char sep;
		char *s1;
		char *s2;
		char *s3;

		sep = ' ';
		s1 = "  test1     test2 test3   ";
		s2 = "";
		s3 = "test";
		ft_split(s1, sep);
		return (0);
	}
