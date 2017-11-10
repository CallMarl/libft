/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 17:32:50 by pprikazs          #+#    #+#             */
/*   Updated: 2017/11/09 13:45:09 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** retourne un pointeur sur la premiere occurence de la chaine to_find trouvé
** dans les n premier caractere de str, sinon retourne null (0). Les caractetes
** apres la fin de chaine str ne sont pas pris en compt,
*/

char		*ft_strnstr(char *str, char *to_find, size_t n)
{
	size_t i;
	size_t j;
	size_t len;

	i = 0;
	j = 0;
	len = ft_strlen(str);
	if (n > len)
		n = len;
	while (j <= n)
	{
		if (str[j] == to_find[i])
		{
			i++;
			j++;
			if (to_find[i] == '\0')
				return (&str[j - i]);
		}
		else
		{
			i = 0;
			j++;
		}
	}
	return (0);
}
