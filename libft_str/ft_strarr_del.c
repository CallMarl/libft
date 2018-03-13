/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarr_del.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 11:35:22 by pprikazs          #+#    #+#             */
/*   Updated: 2018/03/13 11:41:59 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

extern void		ft_strarr_del(char	**arr)
{
	int			i;

	if (arr != 0)
	{
		i = 0;
		while (arr[i] != 0)
			ft_strdel(arr[i++]);
		ft_strmemdel((void **)arr);
	}	
}