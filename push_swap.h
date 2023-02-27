/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 14:38:22 by yuboktae          #+#    #+#             */
/*   Updated: 2023/02/24 17:32:07 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stddef.h>
# include <stdint.h>
# include <string.h>
# include <limits.h>

typedef struct s_list
{
	long			data;
	int				index;
	struct s_list	*next;
}	t_list;

int		check_argv(char *arg_str);
int		check_dup(char **argv, int i);
int		if_zero(char *arg_str);
int		ft_issign(char c);
int		ft_isdigit(char c);
int		correct_input(char **argv);
int		check_list_dup(t_list *head);
void	ft_error(void);
void	delete_stack(t_list **head);
void	del_n_free(t_list **head);
int		ft_lstsize(t_list *lst);
t_list	*init_a(int argc, char **argv);
int		is_sorted(t_list *lst);
int		is_empty(t_list *lst);
long	min_a(t_list *lst);
void	sort_2(t_list *head);
void	sort_3(t_list **head);
void	sort_4(t_list **a, t_list **b);
void	sort_5(t_list **a, t_list **b);
void	radix_sort(t_list **a, t_list **b, int size);
void	ft_sa(t_list **a);
void	ft_sb(t_list **b);
void	ft_ss(t_list **a, t_list **b);
void	ft_pb(t_list **b, t_list **a);
void	ft_pa(t_list **a, t_list **b);
void	ft_ra(t_list **a);
void	ft_rb(t_list **b);
void	ft_rr(t_list **a, t_list **b);
void	ft_rra(t_list **a);
void	ft_rrb(t_list **b);
void	ft_rrr(t_list **a, t_list **b);
void	ft_putstr(char *str);
int		my_strcmp(const char *s1, const char *s2);
long	ft_atol(const char *s);
int		overflow(t_list *lst);
#endif
