/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 21:43:08 by raramos           #+#    #+#             */
/*   Updated: 2019/01/14 16:40:28 by raramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup_c(char **src, char c)
{
	int		len;
	char	*strc;
	char	*head;
	char	*str;

	len = 0;
	while (**src == c && **src)
		(*src)++;
	strc = *src;
	while (*strc && *strc != c)
	{
		len++;
		strc++;
	}
	str = (char *)malloc(sizeof(**src) * (len + 1));
	head = str;
	while (**src != c)
	{
		*str++ = **src;
		(*src)++;
	}
	*str = '\0';
	return (head);
}
