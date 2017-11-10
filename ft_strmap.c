/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 09:32:58 by pprikazs          #+#    #+#             */
/*   Updated: 2017/11/09 09:33:50 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*mstr;
	int		len;

	len = ft_strlen(s);
	if ((mstr = (char *)(malloc(sizeof(char) * (len + 1)))) == NULL)
		return (NULL);
	else
	{
		mstr[len] = '\0';
		while (len-- >= 1)
			mstr[len - 1] = (*f)(s[len - 1]);
		return (mstr);
	}
}
