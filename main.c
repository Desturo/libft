/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 15:48:02 by nschneid          #+#    #+#             */
/*   Updated: 2025/03/18 16:56:43 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>

void	test_isprint()
{
	int index;

	printf("Testing: ft_isprint\n");

	index = 0;
	while(index < 128)
	{
		printf("\t%c: ", index);
		if(ft_isprint(index))
			printf("yes\n");
		else
			printf("no\n");
		index++;
	}
}

void	test_isalpha()
{
	int index;

	printf("Testing: ft_isalpha\n");

	index = 0;
	while(index < 128)
	{
		printf("\t%c: ", index);
		if(ft_isalpha(index))
			printf("yes\n");
		else
			printf("no\n");
		index++;
	}
}

void	test_isdigit()
{
	int index;

	printf("Testing: ft_isdigit\n");

	index = 0;
	while(index < 128)
	{
		printf("\t%c: ", index);
		if(ft_isdigit(index))
			printf("yes\n");
		else
			printf("no\n");
		index++;
	}
}

void	test_isalnum()
{
	int index;

	printf("Testing: ft_isalnum\n");

	index = 0;
	while(index < 128)
	{
		printf("\t%c: ", index);
		if(ft_isalnum(index))
			printf("yes\n");
		else
			printf("no\n");
		index++;
	}
}

void	test_isascii()
{
	int index;

	printf("Testing: ft_isascii\n");

	index = 0;
	while(index < 128)
	{
		printf("\t%c: ", index);
		if(ft_isascii(index))
			printf("yes\n");
		else
			printf("no\n");
		index++;
	}
}

void	test_memset()
{
	char str[10] = "I love 42!";
	printf("%s\n", str);
	ft_memset(str, '$', 22);
	printf("%s\n", str);
}

int	main()
{
	//test_isalpha();
	//test_isdigit();
	//test_isalnum();
	//test_isascii();
	//test_isprint();
	test_memset();
	return (0);
}

