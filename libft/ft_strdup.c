/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:17:55 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/26 13:16:13 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*str2;

	str2 = (char *)malloc((ft_strlen(str) + 1) * sizeof(char));
	if (!str2)
		return (NULL);
	ft_strlcpy(str2, str, ft_strlen(str) + 1);
	return (str2);
}
/*
#include <stdio.h>

int	main(void)
{
	const char *original = "Hola, mundo!";
	char *duplicada;

	duplicada = ft_strdup(original);
	if (!duplicada)
	{
		printf("Error: No se pudo duplicar la cadena.\n");
		return (1);
	}
	printf("Cadena duplicada: %s\n", duplicada);
	free(duplicada);
	return (0);
}*/
