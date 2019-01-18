/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raramos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 14:46:22 by raramos           #+#    #+#             */
/*   Updated: 2019/01/14 15:07:18 by raramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_lstcount(t_list *lst)
{
	int	i;
	t_list	temp;

	if (!lst)
	{
		return (0);
	}
	i = 1;
	temp = *lst;
	while (temp->next)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
