/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:11:31 by hlahyani          #+#    #+#             */
/*   Updated: 2021/11/22 14:16:53 by hlahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t count, size_t size)
{
	size_t	i;
	void	*call;

	call = (void *)malloc(count*size);
	if (!call)
		return (NULL);
	while (call[i])
		call[i] = 0;
		i++;
}
