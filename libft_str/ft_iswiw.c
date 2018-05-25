/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswiw.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 15:16:37 by pprikazs          #+#    #+#             */
/*   Updated: 2018/05/25 15:26:50 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_iswiw permet de vérifié si le caractere c et bien un caractere ou non
** de la chaine wiw (what i want)
*/

extern int			ft_iswiw(char c, char *wiw)
{
	while (*wiw)
	{
		if (c == *wiw)
			return (1);
		wiw++;
	}
	return (0);
}
