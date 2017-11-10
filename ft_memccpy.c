/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:45:54 by pprikazs          #+#    #+#             */
/*   Updated: 2017/11/10 12:02:46 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *ptrd, void *ptrs, int c, size_t n)
{
	unsigned char	*tmp_ptrd;
	unsigned char	*tmp_ptrs;

	tmp_ptrd = (unsigned char *)ptrd;
	tmp_ptrs = (unsigned char *)ptrs;
	c = (unsigned char)c;
	while (*tmp_ptrs !=  c && n)
	{
		*tmp_ptrd++ = *tmp_ptrs++;
		n--;
	}
	if (n == 0)
			return (0);
	*tmp_ptrd++ = *tmp_ptrs++;
	return (tmp_ptrd);
}

