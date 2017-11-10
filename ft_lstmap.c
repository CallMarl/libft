/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 10:30:19 by pprikazs          #+#    #+#             */
/*   Updated: 2017/11/09 15:08:15 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*alst;
	t_list	*tmp;

	alst = NULL;
	if (lst)
	{
		alst = ft_lstmap(lst->next, f);
		if ((tmp = f(lst)) == NULL)
			return (NULL);
		if (alst)
			ft_lstadd(&alst, tmp);
		else
		{
			if ((alst = ft_lstnew(tmp->content, tmp->content_size)) == NULL)
				return (NULL);
		}
	}
	return (alst);
}
