/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahyani <hlahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 00:03:00 by hlahyani          #+#    #+#             */
/*   Updated: 2021/12/05 00:34:11 by hlahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print_hexa(unsigned long nb, int *len)
{
	char	c;

	if (nb < 16)
	{
		if (nb < 10)
			c = nb + '0';
		else
			c = nb + 87;
		ft_putchar(c, len);
	}
	else
	{
		ft_print_hexa(nb / 16, len);
		ft_print_hexa(nb % 16, len);
	}
}

void	ft_print_address(unsigned long address, int *len)
{
	ft_putstr("0x", len);
	ft_print_hexa(address, len);
}
