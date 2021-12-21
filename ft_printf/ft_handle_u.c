/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahyani <hlahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 23:00:24 by hlahyani          #+#    #+#             */
/*   Updated: 2021/12/05 00:29:55 by hlahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_handle_u(unsigned int nb, int *len)
{
	char	c;

	if (nb < 10)
	{
		c = nb + '0';
		ft_putchar(c, len);
	}
	else
	{
		ft_handle_u(nb / 10, len);
		ft_handle_u(nb % 10, len);
	}
}
