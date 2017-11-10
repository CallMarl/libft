/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 09:46:18 by pprikazs          #+#    #+#             */
/*   Updated: 2017/11/09 09:46:37 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
** A lloue et retourne une nouvelle chaine resultant de la concatenation
** des chaine s1 et s2.
*/

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*cat;
	int		len1;
	int		len2;
	int		i;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if ((cat = (char *)(malloc(sizeof(char) * (len1 + len2 + 1)))) == NULL)
		return (NULL);
	i = 0;
	while (i < len1 || i < len2)
	{
		if (i < len1)
			cat[i] = s1[i];
		if (i < len2)
			cat[len1 + i] = s2[i];
		i++;
	}
	cat[len1 + len2] = '\0';
	return (cat);
}
