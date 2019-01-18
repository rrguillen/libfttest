/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word_count_c.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 21:34:49 by raramos           #+#    #+#             */
/*   Updated: 2019/01/13 21:54:52 by raramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_word_count_c(char *str, char c)
{
	int string_count;
	int in_split;
	int i;

	string_count = 0;
	i = 0;
	in_split = 1;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			in_split = 1;
		else if (in_split == 1)
		{
			string_count++;
			in_split = 0;
		}
		i++;
	}
	return (string_count);
}
