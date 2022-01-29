/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahyani <hlahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:41:03 by hlahyani          #+#    #+#             */
/*   Updated: 2021/12/05 00:40:28 by hlahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, int *len)
{
	char	c;

	if (nb == -2147483648)
	{
		ft_putstr("-2147483648", len);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-', len);
	}
	if (nb < 10)
	{
		c = nb + '0';
		ft_putchar(c, len);
	}
	else
	{
		ft_putnbr(nb / 10, len);
		ft_putnbr(nb % 10, len);
	}
}
