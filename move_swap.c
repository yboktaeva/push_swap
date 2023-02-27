/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 11:26:57 by yuboktae          #+#    #+#             */
/*   Updated: 2023/02/24 17:29:32 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_list *head)
{
	long	swap;
	t_list	*tmp;

	tmp = head;
	swap = tmp->data;
	tmp->data = tmp->next->data;
	tmp->next->data = swap;
}

void	ft_sa(t_list **a)
{
	swap(*a);
	ft_putstr("sa\n");
}

void	ft_sb(t_list **b)
{
	swap(*b);
	ft_putstr("sb\n");
}

void	ft_ss(t_list **a, t_list **b)
{
	swap(*a);
	swap(*b);
	ft_putstr("ss\n");
}
