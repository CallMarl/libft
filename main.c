/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprikazs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 10:48:33 by pprikazs          #+#    #+#             */
/*   Updated: 2017/11/10 19:34:54 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#define RC ft_putchar('\n')

int		main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	char *str = "n\0AA";
//	char buf[0xF00] = "\0AAAAAAAAAAAAAA";
	char buf1[0xF00] = "\0AAAAAAAAAAAAAA";
	size_t max = 10;

//	ft_putnbr(strlcat(buf, str, max));RC;
//	ft_putstr(buf);RC;
//	RC;
	ft_putnbr(ft_strlcat(buf1, str, max));RC;
	ft_putstr(buf1);RC;

	char *str1 = "the cake is a lie !\0I'm hidden lol\r\n";
	char buff1[0xF00] = "there is no stars in the sky";
//	char buff2[0xF00] = "there is no stars in the sky";
//	size_t max1 = strlen("the cake is a lie !\0I'm hidden lol\r\n") + strlen("there is no stars in the sky");
	size_t max2 = 1000;
//	ft_putnbr(strlcat(buff2, str1, max1));RC;
//	ft_putstr(buff2);RC;
//	ft_putnbr(ft_strlen(buff2));RC;
	ft_putnbr(ft_strlcat(buff1, str1, max2));RC;
	ft_putstr(buff1);RC;
	ft_putnbr(ft_strlen(buff1));RC;


	return (0);
}
