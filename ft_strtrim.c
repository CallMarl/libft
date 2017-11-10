/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 09:48:18 by pprikazs          #+#    #+#             */
/*   Updated: 2017/11/09 09:49:50 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
** Retourne une copie de la chaine de caractere sans les espace blanc en debut
** et fin de chaine.
*/

char		*ft_strtrim(char const *s1)
{
	int		i;
	int		y;
	int		len;
	char	*trim;

	i = 0;
	len = ft_strlen(s1);
	while (s1[i] == ' ' || s1[i] == '\n' || s1[i] == '\t')
		i++;
	while (s1[len - 1] == ' ' || s1[len - 1] == '\n' || s1[len - 1] == '\t')
		len--;
	if ((trim = (char *)(malloc(sizeof(char) * (len - i + 2)))) == NULL)
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
