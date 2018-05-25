/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strunsurrond.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 17:55:50 by pprikazs          #+#    #+#             */
/*   Updated: 2018/05/25 18:32:45 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

extern char			*ft_strunsurrond(char *str)
{
	size_t			i;
	size_t			len;

	len = 0;
	if (str != 0)
		len = ft_strlen(str);
	if (len <= 2)
		return (ft_bzero(str, len));
	i = 1;
	while (i < len - 1)
	{
		str[i - 1] = str[i];
		i++;
	}
	str[i - 1] = '\0';
	return (str);
}
