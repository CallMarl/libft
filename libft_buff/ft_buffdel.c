/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 12:01:18 by pprikazs          #+#    #+#             */
/*   Updated: 2018/07/23 11:32:05 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Supprime le contenue du buffeur.
*/

extern void			ft_buffdel(t_buff *buff)
{
	if (buff != 0 && buff->buff != 0)
		ft_memdel(&buff->buff);
}
