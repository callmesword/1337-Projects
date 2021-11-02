/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:01:48 by hlahyani          #+#    #+#             */
/*   Updated: 2021/11/02 20:19:56 by hlahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const  char *src, size_t size)
{
	size_t i;
	size_t	src_size; 
	
	i = 0;
	src_size = 0;
	while (src_size[i])
	{
		src_size++;
	}

	while (src[i] && i < size - 1 && size != 0)
	{
		dst[i] = src[i];
		i++;
	}
	return (src_size);
}

int main()
{
	char dst[] = "abcde";
	char src[] = "defgh";
	printf("\nft: dst = %s len = %zu", dst, ft_strlcpy(dst,src,5));
	printf("\norg: dst = %s len = %zu", dst, strlcpy(dst,src,5));
}
