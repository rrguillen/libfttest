/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 16:36:22 by raramos           #+#    #+#             */
/*   Updated: 2019/01/13 22:04:43 by raramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		s1l;
	int		s2l;
	int		i;

	if (s1 && s2)
	{
		s1l = ft_strlen(s1);
		s2l = ft_strlen(s2);
		new = ft_strnew(s1l + s2l);
		if (new == NULL)
			return (NULL);
		i = -1;
		while (i++ < s1l)
			new[i] = s1[i];
		i = 0;
		while (i < s2l)
		{
			new[i + s1l] = s2[i];
			i++;
		}
		new[i + s1l] = '\0';
		return (new);
	}
	return (NULL);
}
