/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 09:32:01 by pprikazs          #+#    #+#             */
/*   Updated: 2017/11/14 17:07:46 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_striter(char *str, void (*f)(char *))
{
	int i;

	if (str && f)
	{
		i = 0;
		while (str[i] != '\0')
		{
			(*f)(str + i);
			i++;
		}
	}
}
