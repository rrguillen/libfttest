/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raramos <raramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 02:51:13 by raramos           #+#    #+#             */
/*   Updated: 2019/01/07 08:28:24 by raramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *tdst;
	unsigned char *tsrc;

	tdst = (unsigned char *)dst;
	tsrc = (unsigned char *)src;
	while (n--)
	{
		*tdst = *tsrc;
		if (*tsrc == (unsigned char)c)
			return ((void *)++tdst);
		tdst++;
		tsrc++;
	}
	return (NULL);
}
