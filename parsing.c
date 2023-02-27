/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:33:39 by yuboktae          #+#    #+#             */
/*   Updated: 2023/02/24 13:47:12 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_issign(char c)
{
	return (c == '-' || c == '+');
}

int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

int	if_zero(char *arg_str)
{
	int	i;

	i = 0;
	if (ft_issign(arg_str[i]) == 1)
		i++;
	while (arg_str[i] && arg_str[i] == '0')
		i++;
	if (arg_str[i])
		return (0);
	return (1);
}

int	check_argv(char *arg_str)
{
	int	i;

	i = 0;
	if (ft_issign(arg_str[i]) == 1 && arg_str[i + 1] != '\0')
		i++;
	while (arg_str[i])
	{
		if (ft_isdigit(arg_str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	check_dup(char **argv, int i)
{
	int	j;

	j = i + 1;
	while (argv[j])
	{
		if (my_strcmp(argv[i], argv[j]) == 0)
			return (1);
		j++;
	}
	return (0);
}
