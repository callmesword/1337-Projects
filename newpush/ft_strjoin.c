/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:57:44 by hlahyani          #+#    #+#             */
/*   Updated: 2021/11/23 11:05:41 by hlahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*st1;
	char	*st2;
	int	i;
	int	j;
	
	st1 = (char 	*)s1;
	st2 = (char		*)s2;
	i = 0;
	if (!st1 || !st2)
		return (NULL);
	while (st1[i])
	{
		i++;
	}
	j = 0;
	while (st2[j])
	{
		st1[i] = st2[j];
		i++;
		j++;
	}
	st1[i] = '\0';
	return(st1);
}
