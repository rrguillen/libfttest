/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 19:54:25 by raramos           #+#    #+#             */
/*   Updated: 2019/01/13 19:30:50 by raramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int final;
	int power;

	final = 0;
	power = 1;
	while (*str == ' ' || (9 <= *str && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			power = -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		final = (final * 10) + *str - '0';
		str++;
	}
	final = final * power;
	return (final);
}
