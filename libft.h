/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 15:29:19 by nschneid          #+#    #+#             */
/*   Updated: 2025/03/17 15:44:22 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
 
# include <stdlib.h>

int		ft_isalpha(int input);
int		ft_isdigit(int input);
int		ft_isalnum(int input);
int		ft_isascii(int input);
int		ft_isprint(int input);
void	*ft_memset(void *b, int c, size_t len);

#endif

