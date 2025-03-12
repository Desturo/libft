/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 16:12:58 by nschneid          #+#    #+#             */
/*   Updated: 2025/03/12 16:57:35 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_isalpha(int input);

int	main()
{
	int output;

	output = ft_isalpha('*');
	if(output)
	{
		write(1, "alpha", 6);
	} else
	{
		write(1, "no", 3);
	}

	return (0);
}
