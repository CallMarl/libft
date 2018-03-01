/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstremove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 12:46:47 by pprikazs          #+#    #+#             */
/*   Updated: 2018/01/29 17:29:47 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstremove(t_list **alst, int indice)
{
	t_list		*tmp;
	t_list		*rem;
	int			i;

	if (*alst)
	{
		tmp = *alst;
		i = 0;
		while (++i < indice && tmp->next != 0)
			tmp = tmp->next;
		if (indice == 0)
		{
			rem = tmp;
			*alst = rem->next;
		}
		else
		{
			rem = tmp->next;
			tmp->next = rem->next;
		}
		ft_lstdel_elem(rem);
	}
}
