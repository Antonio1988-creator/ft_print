/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:58:47 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/22 12:24:35 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
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
		if (ft_isdigit(c))
		{
			printf("%c es un dígito.\n", c);
		}
		else
		{
			printf("%c no es un dígito.\n", c);
		}
		c++;
	}
	return (0);
}*/
