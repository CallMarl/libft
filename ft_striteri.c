/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 09:32:33 by pprikazs          #+#    #+#             */
/*   Updated: 2017/11/14 17:07:57 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_striteri(char *str, void (*f)(unsigned int, char *))
{
	int i;

	if (str && f)
	{
		i = 0;
		while (str[i] != '\0')
		{
			(*f)(i, &str[i]);
			i++;
		}
	}
}
