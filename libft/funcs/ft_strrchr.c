/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:14:07 by hlahyani          #+#    #+#             */
/*   Updated: 2021/11/01 15:29:41 by hlahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*tmp;

	i = 0;
	if ((char)c == '\0')
	{
		while (*str)
		{
			str++;
		}
		return ((char *)str++);
	}
	while (str[i])
	{
		if (str[i] == c)
			*tmp = c;
		i++;
	}
	return ((char *)(str + i));
}
