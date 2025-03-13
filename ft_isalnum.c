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
int ft_isalpha(int input);
int ft_isdigit(int input);

int	ft_isalnum(int a)
{
	return(ft_isalpha(a) || ft_isdigit(a));
}

