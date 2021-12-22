/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahyani <hlahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 19:49:59 by hlahyani          #+#    #+#             */
/*   Updated: 2021/12/22 16:11:35 by hlahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"

void	ft_free(char **s)
{
	free(*s);
	*s = NULL;
}

char	*ret_line(char **line)
{
	char	*l;
	int		i;
	char	*tmp;

	i = 0;
	if (!(*line)[0])
	{
		ft_free(line);
		return (NULL);
	}
	while ((*line)[i] && (*line)[i] != '\n')
		i++;
	if ((*line)[i] == '\n')
	{
		l = ft_substr(*line, 0, ++i);
		tmp = ft_strdup(*line + i);
		ft_free(line);
		*line = tmp;
		return (l);
	}	
	l = ft_strdup (*line);
	ft_free(line);
	return (l);
}

char	*get_next_line(int fd)
{
	static char	*rem;
	char		*s;
	char		*tmp;
	int			r;

	r = 1;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	s = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!s)
		return (NULL);
	if (read(fd, s, 0) < 0)
	{
		ft_free(&s);
	 	return (NULL);
	}
	if (!rem)
		rem = ft_strdup("");
	while (r && !ft_strchr(rem, '\n'))
	{
		r = read(fd, s, BUFFER_SIZE);
		s[r] = '\0';
		tmp = rem;
		rem = ft_strjoin(tmp, s);
		ft_free(&tmp);
	}
	ft_free(&s);
	return (ret_line((&rem)));
	
}

// int main()
// {
// 	int fd = open("test.txt", O_RDWR);
// 	char *s;
// 	s = get_next_line(fd);
// 	//s = get_next_line(fd);
// 	// s = get_next_line(fd);
// 	// s = get_next_line(fd);
// 	// s = get_next_line(fd);
// 	printf("%s", s);
// }
