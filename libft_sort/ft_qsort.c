/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_qsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 19:33:44 by pprikazs          #+#    #+#             */
/*   Updated: 2018/05/08 19:38:07 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

/*
** Fonction de trie rapide avec le pivot qui est l'indice du milieux du 
** tableau
*/

extern void			ft_qsort(void *base, size_t nel, size_t width, \
		int (*cmp)(const void *, const void *))
{
	size_t			i;
	size_t			piv;

	if (nel <= 0)
		return ;
	i = width;
	piv = 0;
	ft_memswap(base, &base[(nel / 2) * width], width);
	while (i < (nel) * width)
	{
		if ((*cmp)(&base[i], base) < 0)
		{
			piv += width;
			ft_memswap(&base[i], &base[piv], width);
		}
		i += width;
	}
	ft_memswap(base, &base[piv], width);
	if (piv != 0)
		ft_qsort(base, piv / width, width, cmp);
	ft_qsort(&base[piv + width], nel - ((piv / width) + 1), width, cmp); 
}
