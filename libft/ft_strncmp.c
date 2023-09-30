/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 14:58:20 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/22 12:58:59 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		else if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
    const char *str1 = "Hola, mundo!";
    const char *str2 = "Hola";
    size_t n = 5;

    int result = ft_strncmp(str1, str2, n);

    if (result == 0)
    {
        printf("Las cadenas son iguales.");
    }
    else if (result < 0)
    {
        printf("La cadena 1 es menor que la cadena 2.");
    }
    else
    {
        printf("La cadena 1 es mayor que la cadena 2.");
    }

    return 0;
}*/
