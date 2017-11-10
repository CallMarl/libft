/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:40:16 by pprikazs          #+#    #+#             */
/*   Updated: 2017/11/09 14:57:13 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strrchr(char *str, int c)
{
	char	*tmp_str;
	char	*i;

	tmp_str = str;
	i = 0;
	while (*tmp_str != '\0')
	{
		if (*tmp_str == c)
			i = tmp_str;
		tmp_str++;
	}
	if (c == '\0' && *tmp_str == c)
		i = tmp_str;
	if (i != 0)
		return (i);
	return (0);
}
