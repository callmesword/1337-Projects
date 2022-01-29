/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:34:16 by hlahyani          #+#    #+#             */
/*   Updated: 2021/11/27 18:14:41 by hlahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	size_t			i;
	char			*str;
	unsigned char	chr;

	str = (char *)b;
	chr = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		str[i] = chr;
		i++;
	}
	return (str);
}
