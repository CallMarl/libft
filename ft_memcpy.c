/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:49:56 by pprikazs          #+#    #+#             */
/*   Updated: 2017/11/10 09:27:41 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *ptrd, void *ptrs, size_t n)
{
	unsigned char	*tmp_ptrd;
	unsigned char	*tmp_ptrs;

	tmp_ptrd = (unsigned char *)ptrd;
	tmp_ptrs = (unsigned char *)ptrs;
	while (n--)
		*tmp_ptrd++ = *tmp_ptrs++;
	return (ptrd);
}
