/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_wc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 01:01:56 by raramos           #+#    #+#             */
/*   Updated: 2019/01/18 01:02:33 by raramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_str_wc(char *s, char c)
{
	int i;
	int wc;
	int word;

	i = 0;
	wc = 0;
	word = 0;
	while (s[i])
	{
		if (!word && s[i] != c)
		{
			word++;
			wc++;
		}
		else if (word && s[i] == c)
		{
			word--;
		}
		i++;
	}
	return (wc);
}
