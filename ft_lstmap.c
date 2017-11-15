/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 10:30:19 by pprikazs          #+#    #+#             */
/*   Updated: 2017/11/15 13:16:39 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*alst;
	t_list	*tmp;

	alst = 0;
	if (lst)
	{
		alst = ft_lstmap(lst->next, f);
		if ((tmp = f(lst)) == 0)
			return (0);
		if (alst)
			ft_lstadd(&alst, tmp);
		else
		{
			if ((alst = ft_lstnew(tmp->content, tmp->content_size)) == 0)
				return (0);
		}
	}
	return (alst);
}
