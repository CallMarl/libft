/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 10:25:06 by pprikazs          #+#    #+#             */
/*   Updated: 2017/11/09 10:27:40 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Imprime la chaine de caractere passé en parametre sur la sortie standard et
** ajoute un retour a l a ligne.
*/

void		ft_putendl(char *str)
{
	ft_putstr(str);
	ft_putchar('\n');
}
