/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:54:31 by hlahyani          #+#    #+#             */
/*   Updated: 2021/12/01 22:37:06 by hlahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ds;
	unsigned char	*sr;
	size_t			i;

	ds = (unsigned char *)dst;
	sr = (unsigned char *)src;
	i = 0;
	if (!ds && !sr)
		return (NULL);
	while (i < n)
	{
		ds[i] = sr[i];
		i++;
	}
	return (ds);
}
