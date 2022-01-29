/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:42:52 by hlahyani          #+#    #+#             */
/*   Updated: 2021/11/29 16:25:09 by hlahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	else if (len > ft_strlen(s) - start)
		sub = malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	else
		sub = malloc(sizeof(char) * len + 1);
	if (!sub)
		return (NULL);
	while (i < len && s[i] && start < ft_strlen(s))
	{
		sub[i] = *(s + start + i);
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
