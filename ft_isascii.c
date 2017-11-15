/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 17:51:20 by pprikazs          #+#    #+#             */
/*   Updated: 2017/11/15 13:15:28 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Verifie si la valeur int passé en parametre appartient à la table asscii.
*/

int		ft_isascii(int c)
{
	return ((0 <= c && c <= 127) ? 1 : 0);
}
