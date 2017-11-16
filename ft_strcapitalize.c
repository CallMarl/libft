/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 14:45:57 by pprikazs          #+#    #+#             */
/*   Updated: 2017/11/16 15:09:35 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcapitalize(char *str)
{
	char	*tmp;

	tmp = str;
	ft_toupper(*tmp++);
	while (*tmp)
	{
		ft_tolower(*tmp);
		if (!ft_isalnum(*(tmp - 1)))
		{
			ft_toupper(*tmp);
		}
		tmp++;
	}
	return (str);
}
