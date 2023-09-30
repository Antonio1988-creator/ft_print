/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:02:04 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/22 12:24:40 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <unistd.h>

int	ft_isprint(int c)
{
	if (!(c >= 32 && c <= 126))
		return (0);
	else
		return (1);
}
/*
int	main(void)
{
	int		input;
	int		result;
	char	print_char;

	input = 0;
	result = ft_isprint(input);
	if (result)
	{
		print_char = '1';
		write(1, &print_char, 1);
	}
	else
	{
		print_char = '0';
		write(1, &print_char, 1);
	}
	write(1, "\n", 1);
	return (0);
}*/
