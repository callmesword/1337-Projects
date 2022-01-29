/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:39:54 by hlahyani          #+#    #+#             */
/*   Updated: 2021/11/27 23:13:28 by hlahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;
	char	*hays;

	i = 0;
	hays = (char *)haystack;
	needle_len = ft_strlen(needle);
	if (needle_len == 0 || hays == needle)
		return (hays);
	while (hays[i] && i < len)
	{
		j = 0;
		while (needle[j] && hays[i + j] == needle[j] && i + j < len)
			j++;
		if (j == needle_len)
			return (hays + i);
		i++;
	}
	return (0);
}
