/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 17:30:36 by raramos           #+#    #+#             */
/*   Updated: 2019/01/12 12:20:53 by raramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*new;
	int		slen;
	int		frontw;
	int		i;

	if (!s)
		return (NULL);
	frontw = 0;
	slen = ft_strlen(s);
	while (s[frontw] == ' ' || s[frontw] == '\n' || s[frontw] == '\t')
		frontw++;
	while (s[slen - 1] == ' ' || s[slen - 1] == '\n' || s[slen - 1] == '\t')
		slen--;
	if (slen < frontw)
		slen = frontw;
	slen = slen - frontw;
	new = ft_strnew(slen);
	if (new == NULL)
		return (NULL);
	i = -1;
	while (++i < slen)
		new[i] = s[i + frontw];
	return (new);
}
