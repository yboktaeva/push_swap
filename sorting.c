/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:11:11 by yuboktae          #+#    #+#             */
/*   Updated: 2023/02/24 17:31:15 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_pushed(t_list *lst)
{
	long	min;
	int		find;

	find = 0;
	min = min_a(lst);
	while (lst->data != min)
	{
		find++;
		lst = lst->next;
	}
	return (find);
}

void	sort_2(t_list *head)
{
	t_list	*tmp;

	if (!head)
		return ;
	tmp = head;
	if (tmp->data > tmp->next->data)
		ft_sa(&tmp);
}

void	sort_3(t_list **head)
{
	if (!(*head))
		return ;
	if ((*head)->data > (*head)->next->data
		&& (*head)->data < (*head)->next->next->data)
		ft_sa(head);
	else if ((*head)->data > (*head)->next->next->data
		&& (*head)->next->data < (*head)->next->next->data)
		ft_ra(head);
	else if ((*head)->data > (*head)->next->next->data
		&& (*head)->data < (*head)->next->data)
		ft_rra(head);
	else if ((*head)->data > (*head)->next->data
		&& (*head)->data > (*head)->next->next->data)
	{
		ft_sa(head);
		if ((*head)->next->data > (*head)->next->next->data)
			ft_rra(head);
	}
	else if ((*head)->data < (*head)->next->data
		&& (*head)->next->data > (*head)->next->next->data)
	{
		ft_sa(head);
		if ((*head)->data > (*head)->next->next->data)
			ft_ra(head);
	}
}

void	sort_4(t_list **a, t_list **b)
{
	long	min;
	t_list	*tmp_a;
	t_list	*tmp_b;

	tmp_a = *a;
	tmp_b = *b;
	min = min_a(*a);
	if (tmp_a->next->data == min)
		ft_sa(&tmp_a);
	else if (tmp_a->next->next->data == min)
	{
		ft_rra(&tmp_a);
		ft_rra(&tmp_a);
	}
	else if (tmp_a->next->next->next->data == min)
		ft_rra(&tmp_a);
	if (is_sorted(tmp_a) == 1)
		return ;
	ft_pb(&tmp_b, &tmp_a);
	sort_3(&tmp_a);
	ft_pa(&tmp_a, &tmp_b);
	*a = tmp_a;
	*b = tmp_b;
}

void	sort_5(t_list **a, t_list **b)
{
	int	find;

	find = find_pushed(*a);
	if (find == 1)
		ft_sa(a);
	else if (find == 2)
	{
		ft_ra(a);
		ft_ra(a);
	}
	else if (find == 3)
	{
		ft_rra(a);
		ft_rra(a);
	}
	else if (find == 4)
		ft_rra(a);
	if (is_sorted(*a) == 1)
		return ;
	ft_pb(b, a);
	sort_4(a, b);
	ft_pa(a, b);
}
