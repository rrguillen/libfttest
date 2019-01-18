/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raramos <raramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 22:50:03 by raramos           #+#    #+#             */
/*   Updated: 2019/01/10 10:47:59 by raramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int o;

	if (needle[0] == '\0')
		return ((char *)haystack);
	o = 0;
	while (haystack[o] != '\0')
	{
		i = 0;
		if (haystack[o + i] == needle[i])
		{
			while (haystack[o + i] == needle[i])
			{
				if (needle[i + 1] == '\0')
					return ((char *)&haystack[o]);
				i++;
			}
		}
		o++;
	}
	return (NULL);
}
