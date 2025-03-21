/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 16:53:22 by nschneid          #+#    #+#             */
/*   Updated: 2025/03/12 16:53:32 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int input)
{
	return ((input >= 'A' && input <= 'Z') || (input >= 'a' && input <= 'z'));
}

//int	main(void)
//{
//	int index;
//
//	printf("Testing: ft_isalpha\n");
//
//	index = 0;
//	while(index < 128)
//	{
//		printf("\t%c: ", index);
//		if(ft_isalpha(index))
//			printf("yes\n");
//		else
//			printf("no\n");
//		index++;
//	}
//	return (0);
//}
