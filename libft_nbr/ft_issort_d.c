/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issort_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 15:16:11 by pprikazs          #+#    #+#             */
/*   Updated: 2018/01/23 19:22:38 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int				ft_issort_d(int *array, size_t size)
{
	size_t		i;

	i = 0;
	while (i < size)
	{
		if (array[i] < array[i + 1])
			return (0);
		i++;
	}
	return (1);
}
