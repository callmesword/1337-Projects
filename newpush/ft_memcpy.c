/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:54:31 by hlahyani          #+#    #+#             */
/*   Updated: 2021/11/22 15:08:19 by hlahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ds;
	unsigned char	*sr;
	size_t	i;

	ds = (unsigned char	*)dst;
	sr = (unsigned char	*)src;
	i = 0;
	while (i < n)
	{
		ds[i] = sr[i];
		i++;
	}
	ds[i] = '\0';
	return (ds);
}
/*
int main()
{
	char dst[] = "hello";
	char src[] = "world";
	printf("\n%s",ft_memcpy(dst,src,1));
	printf("\n%s", memcpy(dst,src,1));
}*/
