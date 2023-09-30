/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:16:22 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/22 12:24:16 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	char	c;

	c = '0';
	while (c <= 'z')
	{
		if (ft_isalnum(c))
		{
			printf("%c es un dígito o una letra alfabética.\n", c);
		}
		else
		{
			printf("%c no es un dígito ni una letra alfabética.\n", c);
		}
		c++;
	}
	return (0);
}*/
