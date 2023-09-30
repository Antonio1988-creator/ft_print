/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:16:56 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/26 11:05:37 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
/*
#include <stdio.h>

int main(void)
{
    const char *cadenaOriginal = "Esta es una cadena de ejemplo";
    char *subcadena;
    size_t inicio = 5;
    size_t longitud = 10;
    subcadena = ft_substr(cadenaOriginal, inicio, longitud);
    if (subcadena != NULL)
    {
        printf("Subcadena extraída: %s\n", subcadena);
        free(subcadena);
    }
    else
        printf("Error: No se pudo extraer la subcadena.\n");
    return (0);
}*/
