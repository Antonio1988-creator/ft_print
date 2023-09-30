/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:01:30 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/22 12:52:16 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i++;
	}
	if (str[i] == ((char)c))
		return ((char *)(str + i));
	return (NULL);
}
/*
int main(void)
{
    const char *str = "Hello, world!";
    int c = 'o';

    char *result = ft_strchr(str, c);

    if (result)
        printf("Caracter '%c' encontrada la posición: %ld\n", c, result - str);
    else
        printf("Caracter '%c' no encontrado en la cadena.\n", c);

    return (0);
}*/
