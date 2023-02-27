/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 11:19:39 by yuboktae          #+#    #+#             */
/*   Updated: 2023/02/22 17:15:08 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_push(t_list **dest, t_list **src)
{
	t_list	*to;
	t_list	*from;
	t_list	*tmp;

	to = *dest;
	from = *src;
	if (from == NULL)
		return ;
	tmp = from;
	from = from->next;
	*src = from;
	if (!to)
	{
		to = tmp;
		to->next = NULL;
		*dest = to;
	}
	else
	{
		tmp->next = to;
		*dest = tmp;
	}
}

void	ft_pb(t_list **b, t_list **a)
{
	ft_push(b, a);
	ft_putstr("pb\n");
}

void	ft_pa(t_list **a, t_list **b)
{
	ft_push(a, b);
	ft_putstr("pa\n");
}
