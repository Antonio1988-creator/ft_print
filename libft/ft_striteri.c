/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:27:07 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/26 09:56:54 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>
#include <unistd.h>

void	my_function(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = *c;
	else
		*c = *c + 1;
}

int	main(void)
{
	char str[] = "Hello, World!";

	ft_striteri(str, &my_function);
	printf("%s\n", str);
	return (0);
}*/
