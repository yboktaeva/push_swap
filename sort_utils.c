/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 13:06:32 by yuboktae          #+#    #+#             */
/*   Updated: 2023/02/24 17:30:43 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_list *lst)
{
	while (lst->next != NULL)
	{
		if (lst->data > lst->next->data)
			return (0);
		lst = lst->next;
	}
	return (1);
}

int	is_empty(t_list *lst)
{
	if (lst == NULL)
		return (1);
	return (0);
}

long	min_a(t_list *lst)
{
	t_list	*curr;
	long	min;

	if (!lst)
		return (0);
	curr = lst;
	min = curr->data;
	while (curr != NULL)
	{
		if (min > curr->data)
			min = curr->data;
		curr = curr->next;
	}
	return (min);
}
