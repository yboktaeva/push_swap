/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 11:30:39 by yuboktae          #+#    #+#             */
/*   Updated: 2023/02/22 17:16:06 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotation(t_list **head)
{
	t_list	*last;
	t_list	*first;
	t_list	*tmp;

	tmp = *head;
	if (tmp == NULL)
		return ;
	first = tmp;
	last = tmp;
	tmp = tmp->next;
	while (last->next != NULL)
		last = last->next;
	last->next = first;
	first->next = NULL;
	*head = tmp;
}

void	ft_ra(t_list **a)
{
	rotation(a);
	ft_putstr("ra\n");
}

void	ft_rb(t_list **b)
{
	rotation(b);
	ft_putstr("rb\n");
}

void	ft_rr(t_list **a, t_list **b)
{
	ft_ra(a);
	ft_rb(b);
	ft_putstr("rr\n");
}
