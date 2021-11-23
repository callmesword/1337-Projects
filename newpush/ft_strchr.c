/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:34:40 by hlahyani          #+#    #+#             */
/*   Updated: 2021/11/02 16:39:44 by hlahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	if ((char)c == '\0')
	{
		while (*str)
			str++;
		return ((char *)str++);
	}
	while (str[i])
	{
		if (str[i] == c)
			return ((char *)(str + i));
		i++;
	}
	return (0);
}

int main()
{
	char *str = "hello.oooo";
	char c = '\0';
	printf("%s",  ft_strchr(str,c));
}
