/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:48:58 by hlahyani          #+#    #+#             */
/*   Updated: 2021/12/01 22:35:20 by hlahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ds;
	char	*sr;
	size_t	i;

	sr = (char *)src;
	ds = (char *)dst;
	i = 0;
	if (!ds && !sr)
		return (NULL);
	if (ds > sr)
	{
		ds += len - 1;
		sr += len - 1;
		while (len--)
			*ds-- = *sr--;
	}
	else
	{
		while (i < len)
		{
			ds[i] = sr[i];
			i++;
		}
	}
	return (dst);
}
