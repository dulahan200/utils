/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmestre- <hmestre-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:02:09 by hmestre-          #+#    #+#             */
/*   Updated: 2023/06/26 19:10:13 by hmestre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_list.h"

void	lst_swap(t_list **lst)
{
	int		first;
	int		second;
	t_list	aux_lst;

	first = lst->content;
	lst->content = lst->next->content;
	lst->next->content = first;
}
