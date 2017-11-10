/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 17:07:32 by pprikazs          #+#    #+#             */
/*   Updated: 2017/11/10 19:39:59 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Calcule et retourne la longueur de la chaine passé en paranettre.
*/

size_t		ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
