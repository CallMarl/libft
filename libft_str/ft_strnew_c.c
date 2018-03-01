/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 13:42:36 by pprikazs          #+#    #+#             */
/*   Updated: 2018/02/21 16:32:22 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew_c(size_t size, char c)
{
	char	*str;
	size_t	i;

	str = ft_strnew(size);
	i = 0;
	while (size--)
		str[i++] = c;
	str[i] = '\0';
	return (str);
}
