/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:27:23 by hlahyani          #+#    #+#             */
/*   Updated: 2021/12/02 20:50:24 by hlahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != 0)
	{
		if (s[i] != 0 && s[i] != c)
		{
			while (s[i] && s[i] != c)
				i++;
			count++;
			continue ;
		}
		i++;
	}
	return (count);
}

static int	indexx(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

void	ft_assign(int *i, int *k)
{
	*i = 0;
	*k = -1;
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**ret;

	ft_assign(&i, &k);
	if (!s)
		return (NULL);
	ret = malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!ret)
		return (NULL);
	while (++k < word_count(s, c))
	{
		j = 0;
		while (s[i] == c)
			i++;
		ret[k] = malloc(sizeof(char) * (indexx(&s[i], c) + 1));
		if (!ret[k])
			return (NULL);
		while (s[i] != c && s[i] != '\0')
			ret[k][j++] = s[i++];
		ret[k][j] = '\0';
	}
	ret[k] = NULL;
	return (ret);
}
