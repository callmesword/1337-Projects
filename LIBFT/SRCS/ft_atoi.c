/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:17:24 by hlahyani          #+#    #+#             */
/*   Updated: 2021/11/30 14:11:28 by hlahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	check_long(unsigned long num, int sign)
{
	if (num <= 9223372036854775807)
		return (num * sign);
	if (sign < 0)
		return (0);
	return (-1);
}

static void	ft_assign(int *i, int *sign, long *n)
{
	*i = 0;
	*n = 0;
	*sign = 1;
}

int	ft_atoi(const char *str)
{
	int		i;
	long	n;
	int		sign;

	ft_assign(&i, &sign, &n);
	while (str[i] == '\f' || str[i] == ' ' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
	{
		i++;
	}
	if (str[i] == '-')
	{
		sign = sign * -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	n = check_long(n, sign);
	return (n);
}
