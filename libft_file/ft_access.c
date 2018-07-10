/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_access.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 14:31:13 by pprikazs          #+#    #+#             */
/*   Updated: 2018/07/10 14:33:09 by pprikazs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int			ft_useraccess(int right)
{
	int				ret;

	ret = 0;
	if (right >= 4)
	{
		ret |= S_IRUSR;
		right -= 4;
	}
	if (right >= 2)
	{
		ret |= S_IWUSR;
		right -= 2;
	}
	if (right == 1)
		ret |= S_IXUSR;
	return (ret);
}

static int			ft_otheraccess(int right)
{
	int				ret;

	ret = 0;
	if (right >= 4)
	{
		ret |= S_IROTH;
		right -= 4;
	}
	if (right >= 2)
	{
		ret |= S_IWOTH;
		right -= 2;
	}
	if (right == 1)
		ret |= S_IXOTH;
	return (ret);
}

static int			ft_groupaccess(int right)
{
	int				ret;

	ret = 0;
	if (right >= 4)
	{
		ret |= S_IRGRP;
		right -= 4;
	}
	if (right >= 2)
	{
		ret |= S_IWGRP;
		right -= 2;
	}
	if (right == 1)
		ret |= S_IXGRP;
	return (ret);
}

/*
** Fonction permettant de facilité la gestion des droit d'access notament
** avec la fonction open(2). Les droit se font par un appel classique au chmod.
*/

extern int			ft_access(char *right)
{
	int				val;
	int				cur;
	int				ret;

	ret = 0;
	if (right == 0)
		return (0);
	if (!ft_strisnumber(right) || ft_strlen(right) != 3)
		return (0);
	val = ft_atoi(right);
	if (val <= 0)
		return (0);
	cur = val % 10;
	val /= 10;
	ret |= ft_otheraccess(cur);
	if (val == 0)
		return (ret);
	cur = val % 10;
	val /= 10;
	ret |= ft_groupaccess(cur);
	if (val == 0)
		return (ret);
	cur = val % 10;
	val /= 10;
	ret |= ft_useraccess(cur);
	return (ret);
}
