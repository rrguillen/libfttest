/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 15:44:19 by raramos           #+#    #+#             */
/*   Updated: 2019/01/13 17:20:45 by raramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	if (s)
	{
		new = ft_strnew(len);
		if (new == NULL)
			return (NULL);
		i = 0;
		while (i < len)
		{
			new[i] = s[(size_t)start + i];
			i++;
		}
		new[i] = '\0';
		return (new);
	}
	return (NULL);
}
