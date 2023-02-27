/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:26:43 by yuboktae          #+#    #+#             */
/*   Updated: 2023/02/24 14:46:21 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	get_index(t_list *lst)
{
	t_list	*cpy;
	t_list	*tmp;
	int		index;

	index = 0;
	cpy = lst;
	tmp = lst;
	while (tmp)
	{
		index = 0;
		while (cpy)
		{
			if (tmp->data > cpy->data)
				index++;
			cpy = cpy->next;
		}
		tmp->index = index;
		tmp = tmp->next;
		cpy = lst;
	}
}

void	radix_sort(t_list **a, t_list **b, int size)
{
	t_list	*head_a;
	int		i;
	int		j;

	i = 0;
	get_index(*a);
	head_a = *a;
	while (is_sorted(*a) != 1)
	{
		j = 0;
		while (j++ < size)
		{
			head_a = *a;
			if (((head_a->index >> i) & 1) == 1)
				ft_ra(a);
			else
				ft_pb(b, a);
		}
		while (!(is_empty(*b)))
			ft_pa(a, b);
		i++;
	}
}
