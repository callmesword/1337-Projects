/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:58:21 by hlahyani          #+#    #+#             */
/*   Updated: 2021/12/01 22:34:12 by hlahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;
	size_t	dest_len;

	i = 0;
	if (dstsize == 0 || (dstsize == 0 && !dst))
		return (ft_strlen(src));
	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize < dest_len)
		return (src_len + dstsize);
	while (src[i] && dest_len + i < dstsize - 1)
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	dst[dest_len + i] = '\0';
	return (dest_len + src_len);
}
