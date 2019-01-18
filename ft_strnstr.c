/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raramos <raramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 01:09:39 by raramos           #+#    #+#             */
/*   Updated: 2019/01/12 12:11:29 by raramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	o;

	if (*needle == '\0')
		return ((char *)haystack);
	o = 0;
	while (haystack[o] != '\0' && o < len)
	{
		i = 0;
		while (haystack[o + i] && needle[i] &&\
				haystack[o + i] == needle[i] && o + i < len)
		{
			if (needle[i + 1] == '\0')
				return ((char *)&haystack[o]);
			i++;
		}
		o++;
	}
	return (NULL);
}
