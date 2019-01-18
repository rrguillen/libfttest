/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raramos <raramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 02:31:40 by raramos           #+#    #+#             */
/*   Updated: 2019/01/05 20:13:07 by raramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *tdst;
	unsigned char *tsrc;

	tdst = (unsigned char *)dst;
	tsrc = (unsigned char *)src;
	while (n > 0)
	{
		n--;
		tdst[n] = tsrc[n];
	}
	return (dst);
}
