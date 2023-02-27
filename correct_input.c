/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   correct_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:35:25 by yuboktae          #+#    #+#             */
/*   Updated: 2023/02/24 17:38:06 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_list_dup(t_list *head)
{
	t_list	*tmp1;
	t_list	*tmp2;

	tmp1 = head;
	while (tmp1 != NULL && tmp1->next != NULL)
	{
		tmp2 = tmp1;
		while (tmp2->next != NULL)
		{
			if (tmp1->data == tmp2->next->data)
				return (1);
			tmp2 = tmp2->next;
		}
		tmp1 = tmp1->next;
	}
	return (0);
}

int	overflow(t_list *lst)
{
	while (lst != NULL)
	{
		if (lst->data > INT_MAX || lst->data < INT_MIN)
			return (1);
		lst = lst->next;
	}
	return (0);
}

int	correct_input(char **argv)
{
	int	i;

	i = 0;
	if (check_argv(argv[i]) == 1 && check_dup(argv, i) == 0
		&& (ft_isdigit(*argv[0]) || ft_issign(*argv[0])))
		return (1);
	return (0);
}
