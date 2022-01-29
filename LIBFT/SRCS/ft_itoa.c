/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 11:03:54 by hlahyani          #+#    #+#             */
/*   Updated: 2021/12/01 20:49:06 by hlahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_len(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
	{
		i++;
		nb *= -1;
	}
	while (nb > 9)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

static int	mod(int len)
{
	int	i;

	i = 1;
	if (len == 1)
		return (1);
	while (len > 1)
	{
		i *= 10;
		len--;
	}
	return (i);
}

static void	assign(int *i, int *len, int *len2, int n)
{
	*i = 0;
	*len = count_len(n);
	*len2 = *len;
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	int		len2;
	char	*num_str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	assign(&i, &len, &len2, n);
	num_str = (char *)malloc(sizeof(char) * len + 1);
	if (!num_str)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		num_str[0] = '-';
		len--;
		i++;
	}
	while (i < len2)
	{
		num_str[i++] = (n / mod(len) % 10 + 48);
		len--;
	}
	num_str[i] = '\0';
	return (num_str);
}
