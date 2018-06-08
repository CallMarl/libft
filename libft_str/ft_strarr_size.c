/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarr_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 09:49:26 by pprikazs          #+#    #+#             */
/*   Updated: 2018/06/04 14:11:55 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

extern size_t		ft_strarr_size(char **arr)
{
	size_t		size;
	char	**tmp;

	size = 0;
	if (arr == 0)
		return (size);
	tmp = arr;
	while (*tmp != 0)
	{
		size++;
		tmp++;
	}
	return (size);
}
