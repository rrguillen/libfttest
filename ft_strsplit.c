/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raramos <raramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 17:35:04 by raramos           #+#    #+#             */
/*   Updated: 2019/01/18 03:50:11 by raramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**box;
	char	*temp;
	int		wc;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	temp = (char *)s;
	wc = ft_str_wc(temp, c);
	if (!(box = (char **)malloc(sizeof(char *) * (wc + 1))))
		return (NULL);
	while (i < wc)
	{
		if (*temp == c)
			temp = temp + ft_c_count(temp, c);
		if (!(box[i] = (char *)malloc(sizeof(char) * (ft_word_l(temp, c) + 1))))
			return (NULL);
		box[i] = ft_strsub(temp, 0, ft_word_l(temp, c));
		i++;
		temp = temp + ft_word_l(temp, c);
	}
	box[i] = NULL;
	return (box);
}
