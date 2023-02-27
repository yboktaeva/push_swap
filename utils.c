/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:20:39 by yuboktae          #+#    #+#             */
/*   Updated: 2023/02/24 17:33:29 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	my_strcmp(const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = i;
	if (s1[i] == '+')
	{
		if (s2[j] != '+')
			i++;
	}
	else
	{
		if (s2[j] == '+')
			j++;
	}
	while (s1[i] == s2[j] && s1[i] && s2[j])
	{
		i++;
		j++;
	}
	return (s1[i] - s2[j]);
}

long	ft_atol(const char *s)
{
	int		i;
	int		sign;
	long	nb;

	i = 0;
	nb = 0;
	sign = 1;
	while (s[i] && (s[i] == 32 || (s[i] >= 9 && s[i] <= 13)))
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while ((s[i] >= '0' && s[i] <= '9') && s[i])
	{
		nb = nb * 10 + (s[i] - '0');
		i++;
	}
	return (nb * sign);
}
