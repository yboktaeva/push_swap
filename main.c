/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:59:41 by yuboktae          #+#    #+#             */
/*   Updated: 2023/02/24 18:11:38 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_swap(t_list **a, t_list **b)
{
	int		size;
	t_list	*tmp_a;
	t_list	*tmp_b;

	tmp_a = *a;
	tmp_b = *b;
	size = ft_lstsize(tmp_a);
	if (size == 2)
		sort_2(tmp_a);
	else if (size == 3)
		sort_3(&tmp_a);
	else if (size == 4)
		sort_4(&tmp_a, &tmp_b);
	else
		sort_5(&tmp_a, &tmp_b);
	*a = tmp_a;
	*b = tmp_b;
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	int		size;
	long	data;

	b = NULL;
	data = 0;
	if (argc < 2)
		return (0);
	a = init_a(argc, argv);
	if (check_list_dup(a) == 1 || overflow(a) == 1)
		del_n_free(&a);
	size = ft_lstsize(a);
	if (is_sorted(a) == 1)
		return (delete_stack(&a), 0);
	if (size <= 5)
		push_swap(&a, &b);
	else
		radix_sort(&a, &b, size);
	delete_stack(&a);
	delete_stack(&b);
	return (0);
}
