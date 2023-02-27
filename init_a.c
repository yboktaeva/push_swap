/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 10:06:15 by yuboktae          #+#    #+#             */
/*   Updated: 2023/02/24 17:39:09 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*t_list_new(long data)
{
	t_list	*new;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->index = 0;
	new->data = data;
	new->next = NULL;
	return (new);
}

static t_list	*get_last(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

static void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (new == NULL)
		return ;
	temp = *lst;
	if (!temp)
	{
		*lst = new;
		return ;
	}
	temp = get_last(temp);
	temp->next = new;
}

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int		len;

	len = 0;
	tmp = lst;
	while (tmp != NULL)
	{
		len++;
		tmp = tmp->next;
	}
	return (len);
}

t_list	*init_a(int argc, char **argv)
{
	int		i;
	int		zero;
	long	data;
	t_list	*a;

	i = 1;
	zero = 0;
	data = 0;
	a = NULL;
	while (i < argc)
	{
		zero += if_zero(argv[i]);
		if (correct_input(&argv[i]) == 1 && zero <= 1)
		{
			data = ft_atol(argv[i]);
			if (i == 1)
				a = t_list_new(data);
			else
				ft_lstadd_back(&a, t_list_new(data));
		}
		else
			del_n_free(&a);
		i++;
	}
	return (a);
}
