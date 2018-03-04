/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gnl.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 12:14:34 by pprikazs          #+#    #+#             */
/*   Updated: 2018/03/04 16:03:20 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

static int		line_extend(char **str, char *tmp)
{
	char	*cpy;
	int		len;

	if (*str == NULL)
	{
		*str = ft_strdup(tmp);
		return (1);
	}
	len = ft_strlen(*str);
	if (!(cpy = ft_strnew(sizeof(char) * len + 1)))
		return (0);
	ft_memcpy((void *)cpy, (void *)*str, sizeof(char) * (len + 1));
	ft_memdel((void **)str);
	*str = ft_strjoin(cpy, tmp);
	ft_memdel((void **)&cpy);
	return (1);
}

static int		read_buff(char *tmp, char *buff, int *cr, char **str)
{
	int i;

	i = *cr;
	while (buff[*cr] != '\n' && buff[*cr] != -1 && *cr < FT_BUFF_SIZE)
	{
		ft_memcpy((void *)&tmp[*cr - i], (void *)&buff[*cr], sizeof(char));
		(*cr)++;
	}
	tmp[*cr - i] = 0;
	(*cr)++;
	tmp[*cr - i] = 0;
	if (!(line_extend(str, tmp)))
		return (-1);
	else if (buff[*cr - 1] == '\n' || (buff[*cr - 1] == -1
				&& ft_strlen(*str) > 0 && *cr != FT_BUFF_SIZE))
		return (1);
	return (0);
}

static int		ini_buff(int fd, char **buff, int *cr)
{
	int ret;

	ret = 1;
	if (*buff != NULL)
		ft_memdel((void **)buff);
	if (!(*buff = ft_memalloc(sizeof(char) * FT_BUFF_SIZE + 1)))
		ret = -1;
	if (ret == 1)
	{
		ret = read(fd, *buff, FT_BUFF_SIZE);
		if (ret == 0)
			ft_memdel((void **)buff);
		*cr = 0;
	}
	return (ret);
}

static int		return_value(int fd, char **line, t_buff *file, char *str)
{
	int				ret;
	char			tmp[FT_BUFF_SIZE + 1];

	while (1)
	{
		if (file->cr >= FT_BUFF_SIZE || file->cr == -1)
		{
			if ((ret = ini_buff(fd, &(file->buff), &(file->cr))) == 0)
				break ;
			else if (ret == -1)
				return (-1);
		}
		if ((ret = read_buff(tmp, file->buff, &(file->cr), &str)) == 1)
			break ;
		else if (ret == -1)
			return (-1);
	}
	if (ret == 0 && tmp[0] != 0 && FT_BUFF_SIZE == 1)
	{
		tmp[0] = 0;
		ret = 1;
	}
	*line = str;
	return (ret);
}

extern int		ft_gnl(int fd, char **line)
{
	static t_buff	file[FT_MAX_FD];
	char			*str;

	str = NULL;
	if (!line || fd < 0 || FT_MAX_FD <= fd)
		return (-1);
	if (file[fd].buff == NULL)
		file[fd].cr = -1;
	return (return_value(fd, line, &file[fd], str));
}
