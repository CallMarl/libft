/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 09:32:58 by pprikazs          #+#    #+#             */
/*   Updated: 2017/11/13 12:32:01 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*mstr;
	int		len;
	int		i;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	if ((mstr = (char *)(malloc(sizeof(char) * (len + 1)))) == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (i < len)
		{
			mstr[i] = (*f)(s[i]);
			i++;
		}
		mstr[len] = '\0';
		return (mstr);
	}
}
