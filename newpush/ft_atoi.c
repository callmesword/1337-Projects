/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:17:24 by hlahyani          #+#    #+#             */
/*   Updated: 2021/11/22 15:25:26 by hlahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_isspace(char	c)
{
	if (c == '\t' || c == '\n' || c == '\v' || '\f' || c == '')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	unsigned int	i;
	int				sign;

	i = 0;
	sign = 1;
	while (str[i])
	{
		if (ft_isspace(str[i]))

	}
}
