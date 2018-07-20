/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffinsert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 16:18:53 by pprikazs          #+#    #+#             */
/*   Updated: 2018/07/20 12:10:16 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

extern int			ft_buffinsert(t_buff *buff, void *elem, size_t ext)
{
	int				i;
	int				ret;

	if (buff == 0)
		return (0);
	i = 0;
	ret = 1;
	while (ret >= 0 && (ret = ft_buffadd(buff, elem)) <= 0 && i < 1)
	{
		if (ret == 0)
			ret = ft_buffextend(buff, ext);
		else
			return (ret);
		if (ret == 0)
			return (ret);
		i++;
	}
	return (ret);
}
