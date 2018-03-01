/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdisplay_andsum.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 17:02:42 by pprikazs          #+#    #+#             */
/*   Updated: 2018/02/22 09:20:18 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t		ft_lstiter_andsum(t_list *lst, void (*f)(t_list *elem))
{
	if (lst->next)
	{
		f(lst);
		return (lst->content_size + ft_lstiter_size(lst->next, f) - 1);
	}
	else
	{
		f(lst);
		return (lst->content_size - 1);
	}
}
