/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 09:24:10 by pprikazs          #+#    #+#             */
/*   Updated: 2017/11/09 11:29:44 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
** Alloue une chaine de caractere fraiche remplie de \0
*/

char		*ft_strnew(size_t size)
{
	char	*str;

	if ((str = (char *)(malloc(sizeof(char) * size + 1))) == NULL)
		return (NULL);
	while (size--)
		str[size] = '\0';
	return (str);
}
