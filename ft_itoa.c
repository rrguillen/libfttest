/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 13:25:28 by raramos           #+#    #+#             */
/*   Updated: 2019/01/13 21:58:56 by raramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*new;
	long	num;
	int		neg;
	int		len;

	num = n;
	len = ft_space_len(num);
	if (!(new = ft_strnew(len)))
		return (NULL);
	neg = 0;
	if (num < 0)
	{
		num = -num;
		neg = 1;
	}
	new[len] = '\0';
	while (len > 0 + neg)
	{
		new[len - 1] = (num % 10) + 48;
		num /= 10;
		len--;
	}
	if (neg == 1)
		new[0] = '-';
	return (new);
}
