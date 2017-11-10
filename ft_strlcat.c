/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:59:05 by pprikazs          #+#    #+#             */
/*   Updated: 2017/11/10 18:07:06 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i;

	i = 0;
	len_dest = (size_t)ft_strlen(dest);//0
	len_src = (size_t)ft_strlen(src);//1
	if (size <= len_dest)
		return (size + len_src);
	while (--size > 0 && src[i] != '\0')
	{
		dest[len_dest + i] = src[i];
		i++;
		if (src[i] == 0)
			dest[len_dest + i - 1] = '\0';
	}
	dest[len_dest + i] = '\0';
	return (len_dest + len_src);
}
