/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strremocc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 18:10:43 by pprikazs          #+#    #+#             */
/*   Updated: 2018/05/25 18:31:19 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Supprime tout les occurence occ présente dans al chaine str
*/

extern char			*ft_strremocc(char *str, const char *occ)
{
	int				i;
	int				y;

	if (str == 0)
		return (str);
	i = 0;
	y = 0;
	while (str[i] != '\0')
	{
		if (ft_iswiw(str[i], occ))
			y++;
		else
			str[i - y] = str[i];
		i++;
	}
	i -= y;
	while (str[i] != '\0')
		str[i++] = '\0';
	return (str);
}
