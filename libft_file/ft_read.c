/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 12:21:14 by pprikazs          #+#    #+#             */
/*   Updated: 2018/07/18 15:32:56 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <unistd.h>
#include "libft.h"

/*
** Lecture de fichier em bllock et non en flux d'un fichier, une taille max est
** definit par la macro FT_MAX_FILE_SIZE.
** -1 ==> alloc error
** -2 ==> Erreur lors de la lecture
** -3 ==> Fichier top grand
*/

extern int		ft_read(int fd, t_buff *content, size_t b_size)
{
	int ret;

	if (!(ft_buffinit(content, b_size, sizeof(char))))
		return (-1);
	while (42)
	{
		if ((ret = read(fd, &content->buff[content->cr], sizeof(char) * b_size)) < 0)
		{
			ft_buffdel(content);
			return (-2);
		}
		if ((content->cr) + ret > FT_MAX_FILE_SIZE)
			return (-3);
		if (!(ft_buffextend(content, b_size)))
		{
			ft_buffdel(content);
			return (-1);
		}
		content->cr += ret;
		if ((size_t)ret < sizeof(char) * b_size)
			return (content->cr);
	}
}
