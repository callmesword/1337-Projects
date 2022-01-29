/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahyani <hlahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:26:44 by hlahyani          #+#    #+#             */
/*   Updated: 2021/12/05 00:38:10 by hlahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
void	ft_putstr(char *str, int *len);
void	ft_putnbr(int nb, int *len);
void	ft_putchar(char c, int *len);
void	ft_print_low_hexa(unsigned int n, int *len);
void	ft_print_upper_hexa(unsigned int n, int *len);
void	ft_handle_u(unsigned int nb, int *len);
void	ft_print_address(unsigned long address, int *len);

#endif
