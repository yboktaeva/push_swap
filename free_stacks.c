/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 17:22:12 by yuboktae          #+#    #+#             */
/*   Updated: 2023/02/24 14:15:50 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	delete_stack(t_list **head)
{
	t_list	*temp;
	t_list	*store;

	if (!(*head))
		return ;
	temp = *head;
	store = NULL;
	while (temp != NULL)
	{
		store = temp->next;
		free (temp);
		temp = store;
	}
	*head = NULL;
}

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit (1);
}

void	del_n_free(t_list **head)
{
	delete_stack(head);
	ft_error();
}
