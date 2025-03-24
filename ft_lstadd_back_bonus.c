/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 17:53:48 by nschneid          #+#    #+#             */
/*   Updated: 2025/03/23 19:37:31 by nschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

//int	main(void)
//{
//	t_list	*list;
//	t_list	*add;
//
//	list = NULL; //ft_lstnew(ft_strdup("test"));
//	add = ft_lstnew(NULL);
//	ft_lstadd_back(&list, add);
//	printf("%p\n", add);
//	printf("%p\n", list->next);
//	free(list->content);
//	free(add->content);
//	free(list);
//	free(add);
//}
