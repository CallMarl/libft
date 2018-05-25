/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsanitize.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 14:44:47 by pprikazs          #+#    #+#             */
/*   Updated: 2018/05/25 14:46:51 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

extern void			ft_strsanitize(char *str, const char *car)
{
	int			i;
	int			y;

	i = 0;
	y = 0;
	while (str[y] != '\0' && ft_strchr(car, str[y]))
		y++;
	while (str[y] != '\0')
	{
		str[i] = str[y];
		i++;
		y++;
	}
	str[i] = '\0';
	while (ft_strchr(car, str[i]) != 0)
	{
		str[i] = '\0';
		i--;
	}
}
