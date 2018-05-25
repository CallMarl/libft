/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 09:48:18 by pprikazs          #+#    #+#             */
/*   Updated: 2018/05/25 14:41:32 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
** Retourne une copie de la chaine de caractere sans les espace blanc en debut
** et fin de chaine.
*/

char		*ft_strtrim(const char *s1)
{
	int		i;
	int		y;
	int		len;
	char	*trim;

	if (s1 == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(s1);
	while (ft_isspace(s1[i]))
		i++;
	while (ft_isspace(s1[len - 1]) && len > i)
		len--;
	if ((trim = (char *)(ft_memalloc(sizeof(char) * (len - i + 1)))) == NULL)
		return (NULL);
	y = 0;
	while (i < len)
	{
		trim[y] = s1[i];
		y++;
		i++;
	}
	return (trim);
}
