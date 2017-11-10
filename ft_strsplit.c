/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 09:59:40 by pprikazs          #+#    #+#             */
/*   Updated: 2017/11/10 10:00:28 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
** Determine en fonction de l'indice (pour la premiere valeur d'une chaine),
** de la valeur s_vat et de la valeur suivante s_valnext, si la valeur courante
** est une sequence de decoupe en fonction du caractere c.
*/

static int		is_splitoccurence(int indice, char s_val, char s_valpre, char c)
{
	if (s_val != c)
	{
		if (s_valpre == c || indice == 0)
			return (1);
	}
	return (0);
}

/*
** Alloue un bloc memoire pour une chaine de caractere resultant de la decoupe
** par le caractere c. La chaine commence à l'indice "indice" de la chaine s et
** se termine à la rencontre du caractere c.
*/

static char		*malloc_word(int indice, char const *s, char c)
{
	char	*word;
	int		len;

	len = 0;
	while (s[indice + len] != c)
		len++;
	if ((word = (char *)(malloc(sizeof(char) * (len + 1)))) != NULL)
	{
		word[len] = '\0';
		while (s[indice + len - 1] != c && len != 0)
		{
			word[len - 1] = s[indice + len - 1];
			len--;
		}
		return (word);
	}
	else
		return (NULL);
}

/*
** Alloue et retroune un tableau de chaine de caractere fraiche resultant de la
** decoupe de la chaine s passé en paramettre par le caractere c.
*/

extern char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		cpt;
	char	**split;

	i = 0;
	cpt = 0;
	while (s[i++] != '\0')
		cpt += is_splitoccurence(i, s[i], s[i - 1], c);
	if ((split = (char **)(malloc(sizeof(char *) * (cpt + 1)))) == NULL)
		return (NULL);
	cpt = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (is_splitoccurence(i, s[i], s[i - 1], c))
			split[cpt++] = malloc_word(i, s, c);
		i++;
	}
	split[cpt] = "";
	return (split);
}
