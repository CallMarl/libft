/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 10:30:28 by pprikazs          #+#    #+#             */
/*   Updated: 2018/03/13 11:25:39 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
** Crée une copie de la chaine src passé en parametre et retourne le nombre
** caractere copié
*/

extern int			*ft_strlcpy(char *dest, const char *src)
{
	size_t			 i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}
