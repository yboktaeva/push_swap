/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_rev.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 11:28:36 by yuboktae          #+#    #+#             */
/*   Updated: 2023/02/22 16:32:58 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rev_rotation(t_list **head)
{
	t_list	*last;
	t_list	*sec_last;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	last = *head;
	sec_last = NULL;
	while (last->next != NULL)
	{
		sec_last = last;
		last = last->next;
	}
	sec_last->next = NULL;
	last->next = *head;
	*head = last;
}

void	ft_rra(t_list **a)
{
	rev_rotation(a);
	ft_putstr("rra\n");
}

void	ft_rrb(t_list **b)
{
	rev_rotation(b);
	ft_putstr("rrb\n");
}

void	ft_rrr(t_list **a, t_list **b)
{
	ft_rra(a);
	ft_rrb(b);
	ft_putstr("rrr\n");
}
