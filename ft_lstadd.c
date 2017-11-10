/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 10:29:34 by pprikazs          #+#    #+#             */
/*   Updated: 2017/11/09 15:10:04 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void		ft_lstadd(t_list **alst, t_list *new_one)
{
	if (new_one)
	{
		new_one->next = *alst;
		*alst = new_one;
	}
}
