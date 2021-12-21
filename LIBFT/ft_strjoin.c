/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:57:44 by hlahyani          #+#    #+#             */
/*   Updated: 2021/12/10 16:20:43 by hlahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	assign(int	*i, int	*j)
{
	*i = 0;
	*j = 0;
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*st1;
	char	*st2;
	char	*alloc;
	int		i;
	int		j;

	st1 = (char *)s1;
	st2 = (char *)s2;
	assign(&i, &j);
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
	free(alloc);
	return (alloc);
}
int main()
{
char s[] = "hello";
char s2[] = "world";
printf("%s", ft_strjoin(s, s2));
//system("leaks a.out");




}
