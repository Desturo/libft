/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:51:20 by nschneid          #+#    #+#             */
/*   Updated: 2025/03/13 15:55:43 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int input)
{
	return(input >= '0' && input <= '9');
}

//int	main()
//{
//	int index;
//
//	printf("Testing: ft_isdigit\n");
//
//	index = 0;
//	while(index < 128)
//	{
//		printf("\t%c: ", index);
//		if(ft_isdigit(index))
//			printf("yes\n");
//		else
//			printf("no\n");
//		index++;
//		return (0);
//	}
//}
