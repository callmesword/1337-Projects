/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:14:07 by hlahyani          #+#    #+#             */
/*   Updated: 2021/11/26 18:29:16 by hlahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;

	i = ft_strlen(s);
	if (c == '\0')
	{
		return ((char *)&s[i]);
	}
	while (i > 0)
	{
		if (s[i - 1] == (unsigned char)c)
			return ((char *) &s[i - 1]);
		i--;
	}
	return (0);
}
