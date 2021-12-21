/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:37:13 by hlahyani          #+#    #+#             */
/*   Updated: 2021/11/02 11:00:41 by hlahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*p;

	i = 0;
	p = (char *)malloc(sizeof(s));
	while (s[i])
	{
		p[i] = s[i];
		i++;
	}
	return (p);
}