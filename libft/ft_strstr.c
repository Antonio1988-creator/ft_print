/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:04:22 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/22 13:50:17 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*h;

	if (*to_find == '\0' && *str == '\0')
		return (str);
	while (*str != '\0')
	{
		s = str;
		h = to_find;
		while (*h != '\0' && *h != '\0' && *h == *s)
		{
			h++;
			s++;
		}
		if (*h == '\0')
			return (str);
		str++;
	}
	return ("");
}
/*
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char str[] = "Este es un ejemplo de cadena";
	char to_find[] = "ejemplo";
	char *result = ft_strstr(str, to_find);
	if (result != NULL)
		printf("Subcadena encontrada en la posición: %ld\n", result - str);
	else
		printf("Subcadena no encontrada.\n");
	return (0);
}*/
