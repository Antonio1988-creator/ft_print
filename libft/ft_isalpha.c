/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:31:49 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/22 12:24:23 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	char	c;

	c = 'A';
	while (c <= 'z')
	{
		if (ft_isalpha(c))
		{
			printf("%c es una letra alfabética.\n", c);
		}
		else
		{
			printf("%c no es una letra alfabética.\n", c);
		}
		c++;
	}
	return (0);
}*/
