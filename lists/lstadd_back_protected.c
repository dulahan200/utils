/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_protected.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmestre- <hmestre-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 20:51:17 by hmestre-          #+#    #+#             */
/*   Updated: 2023/06/26 19:10:00 by hmestre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	lstadd_back_protected(t_list **lst, void *content)
{
	t_list *new_node;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	new_node = ft_lstnew(content);
	if (!lstnew_node)
	{
		ft_lstclear(lst, del);
		return ;
	}
	ft_lstadd_back(list, &new_node);
	(ft_lstlast(*lst))->next = new;
}
