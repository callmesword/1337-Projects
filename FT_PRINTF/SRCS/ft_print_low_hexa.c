/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_low_hexa.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahyani <hlahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 22:18:08 by hlahyani          #+#    #+#             */
/*   Updated: 2021/12/05 16:18:12 by hlahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_low_hexa(unsigned int nb, int *len)
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
		ft_print_low_hexa(nb / 16, len);
		ft_print_low_hexa(nb % 16, len);
	}
}
