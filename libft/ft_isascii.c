/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:49:25 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/22 12:24:30 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	int	input;
	int	result;

	input = 127;
	result = ft_isascii(input);
	if (result)
		printf("%d es un valor ASCII.\n", input);
	else
		printf("%d no es un valor ASCII.\n", input);
	return (0);
}*/
