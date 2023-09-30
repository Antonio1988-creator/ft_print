/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:20:04 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/22 16:52:39 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
//#include <stdio.h>

static int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && is_in_set(s1[end - 1], set))
		end--;
	str = (char *)malloc(end - start + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}
/*
int main(void)
{
    const char *cadenaOriginal = " 1  Hola, Mundo! 1  ";
    const char *conjuntoSet = "1  ";
    char *cadenaRecortada;

    cadenaRecortada = ft_strtrim(cadenaOriginal, conjuntoSet);

    if (cadenaRecortada != NULL)
    {
        printf("Cadena original: '%s'\n", cadenaOriginal);
        printf("Cadena recortada: '%s'\n", cadenaRecortada);
        free(cadenaRecortada);
    }
    else
    {
        printf("Error: No se pudo recortar la cadena.\n");
    }

    return (0);
}*/
