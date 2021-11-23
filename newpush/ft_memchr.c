/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:20:54 by hlahyani          #+#    #+#             */
/*   Updated: 2021/11/22 14:37:46 by hlahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *st;
	size_t			i;

	st = (unsigned char *)s;
	i = 0;
	while (st[i] && i < n)
	{
		if (st[i] == c)
		{
			return (st + i);
		}
		i++;
	}
	return (NULL);
}
