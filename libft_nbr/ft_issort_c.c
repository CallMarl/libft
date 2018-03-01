/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issort_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 15:12:49 by pprikazs          #+#    #+#             */
/*   Updated: 2018/01/23 19:23:14 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int				ft_issort_c(int *array, size_t size)
{
	size_t		i;

	i = 0;
	while (i < size)
	{
		if (array[i] > array[i + 1])
			return (0);
		i++;
	}
	return (1);
}
