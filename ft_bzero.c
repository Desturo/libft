/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 15:45:44 by nschneid          #+#    #+#             */
/*   Updated: 2025/03/18 15:46:05 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

//int	main()
//{
//	char str[10] = "I love 42!";
//	printf("%s\n", str);
//	ft_bzero(str, '$', 22);
//	printf("%s\n", str);
//	return (0);
//}
