/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adleau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 14:42:56 by adleau            #+#    #+#             */
/*   Updated: 2018/04/12 10:44:22 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

t_list		*ft_lstnew(const void *content, size_t size)
{
	t_list	*lst;

	if ((lst = (t_list *)ft_memalloc(sizeof(t_list))) == 0)
		return (0);
	if (content)
	{
		lst->content = ft_memalloc(sizeof(unsigned char) * (size));
		if (lst->content)
		{
			ft_memcpy(lst->content, content, size);
			lst->size = size;
		}
	}
	else
	{
		lst->content = 0;
		lst->size = 0;
	}
	lst->next = 0;
	return (lst);
}
