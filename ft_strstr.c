/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 17:38:03 by pprikazs          #+#    #+#             */
/*   Updated: 2017/11/08 17:38:27 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** retourne un pointeur sur la premiere occurence de la chaine to_find trouvé
** dans str, sinon retourne null (0).
*/

char		*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] == to_find[i])
		{
			i++;
			j++;
			if (to_find[i] == '\0')
				return (&str[j - i]);
		}
		else
		{
			i = 0;
			j++;
		}
	}
	return (0);
}
