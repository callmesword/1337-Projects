/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahyani <hlahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:26:16 by hlahyani          #+#    #+#             */
/*   Updated: 2021/12/05 15:15:07 by hlahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_handle_s(char *str, int *len)
{
	if (!str)
		ft_putstr("(null)", len);
	else
		ft_putstr(str, len);
}

void	ft_convert(char c, va_list args, int *len)
{
	if (c == '%')
		ft_putchar('%', len);
	if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int), len);
	if (c == 's')
		ft_handle_s(va_arg(args, char *), len);
	if (c == 'c')
		ft_putchar(va_arg(args, int), len);
	if (c == 'x')
		ft_print_low_hexa(va_arg(args, unsigned int), len);
	if (c == 'X')
		ft_print_upper_hexa(va_arg(args, unsigned int), len);
	if (c == 'u')
		ft_handle_u(va_arg(args, unsigned int), len);
	if (c == 'p')
		ft_print_address(va_arg(args, unsigned long), len);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
			ft_convert(format[++i], args, &len);
		else
			ft_putchar(format[i], &len);
			i++;
	}
	return (len);
}
