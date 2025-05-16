/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:56:05 by nschneid          #+#    #+#             */
/*   Updated: 2025/03/13 16:11:24 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

//int	main(void)
//{
//	int index;
//
//	printf("Testing: ft_isalnum\n");
//
//	index = 0;
//	while(index < 128)
//	{
//		printf("\t%c: ", index);
//		if(ft_isalnum(index))
//			printf("yes\n");
//		else
//			printf("no\n");
//		index++;
//	}
//	return (0);
//}
