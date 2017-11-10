/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 17:20:34 by pprikazs          #+#    #+#             */
/*   Updated: 2017/11/08 17:21:29 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Retourn un pointeur sur la permiere occurence du caractere c trouvé dans
** la chaine str, sinon retourn null (0). L'occurence peut etre le caractere
** de fin de chaine.
*/

char		*ft_strchr(char *str, int c)
{
	char	*tmp_str;

	tmp_str = str;
	while (*tmp_str != '\0')
	{
		if (*tmp_str == c)
			return (tmp_str);
		tmp_str++;
	}
	if (c == '\0' && *tmp_str == c)
		return (tmp_str);
	return (0);
}
