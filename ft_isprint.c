/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 16:49:28 by nschneid          #+#    #+#             */
/*   Updated: 2025/03/13 16:49:32 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return(c >= ' ' || c <= '~');
}

//int main()
//{
//	int index;
//
//	printf("Testing: ft_isprint\n");
//
//	index = 0;
//	while(index < 128)
//	{
//		printf("\t%c: ", index);
//		if(ft_isprint(index))
//			printf("yes\n");
//		else
//			printf("no\n");
//		index++;
//	}
//	return (0);
//}
