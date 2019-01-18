/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raramos <raramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 23:26:44 by raramos           #+#    #+#             */
/*   Updated: 2019/01/11 15:13:30 by raramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	char	*freshmem;

	i = 0;
	freshmem = (char *)malloc(sizeof(*freshmem) * size);
	if (freshmem == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		freshmem[i] = '\0';
		i++;
	}
	return ((void *)freshmem);
}
