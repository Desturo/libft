/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 16:27:45 by nschneid          #+#    #+#             */
/*   Updated: 2025/03/13 16:35:33 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

//int	main(void)
//{
//	int index;
//
//	printf("Testing: ft_isascii\n");
//
//	index = 0;
//	while(index < 128)
//	{
//		printf("\t%c: ", index);
//		if(ft_isascii(index))
//			printf("yes\n");
//		else
//			printf("no\n");
//		index++;
//	}
//	return (0);
//}
