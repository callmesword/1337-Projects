/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:34:40 by hlahyani          #+#    #+#             */
/*   Updated: 2021/11/29 05:01:12 by hlahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	chr;

	i = 0;
	chr = (char)c;
	if ((char)c == '\0')
	{
		while (*s)
			s++;
		return ((char *)s++);
	}
	while (s[i])
	{
		if (s[i] == chr)
			return ((char *)(s + i));
		i++;
	}
	return (0);
}
