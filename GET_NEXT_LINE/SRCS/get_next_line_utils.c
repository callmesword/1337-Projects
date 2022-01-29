/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahyani <hlahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 15:35:30 by hlahyani          #+#    #+#             */
/*   Updated: 2021/12/20 20:10:55 by hlahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// SOME OF LIBFT FUNCTIONS.

#include "get_next_line.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*st1;
	char	*st2;
	char	*alloc;
	int		i;
	int		j;

	i = 0;
	j = 0;
	st1 = (char *)s1;
	st2 = (char *)s2;
	if (!st1 || !st2)
		return (NULL);
	alloc = malloc(sizeof(char) * (ft_strlen(st1) + ft_strlen(st2) + 1));
	if (!alloc)
		return (NULL);
	while (st1[i])
	{
		alloc[j++] = st1[i++];
	}
	j = 0;
	while (st2[j])
	{
		alloc[i++] = st2[j++];
	}
	alloc[i] = '\0';
	return (alloc);
}

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

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*p;

	i = 0;
	p = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!p)
		return (NULL);
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

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
