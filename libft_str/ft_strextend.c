/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strextend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 15:38:50 by pprikazs          #+#    #+#             */
/*   Updated: 2018/05/28 16:23:48 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Etend la chaine dest, en cas d'erreur d'allcation supprime dest et retourn 0
*/

extern char		*ft_strextend(char *dest, char *ext)
{
	char		*str;
	size_t		len1;
	size_t		len2;

	if (ext == 0)
		return (dest);
	if (dest == 0)
		return (ft_strdup(ext));
	len1 = ft_strlen(dest);
	len2 = ft_strlen(ext);
	if (!(str = ft_strnew(len1 + len2)))
	{
		ft_strdel(&dest);
		return (0);
	}
	ft_strcpy_x(&str[ft_strcpy_x(str, dest)], ext);
	ft_strdel(&dest);
	return (str);
}
