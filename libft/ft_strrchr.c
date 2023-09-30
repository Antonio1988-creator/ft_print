/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:15:12 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/22 12:59:32 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	last_index;

	i = 0;
	last_index = -1;
	while (str[i])
	{
		if (str[i] == (char)c)
			last_index = i;
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&str[i]);
	if (last_index >= 0)
		return ((char *)&str[last_index]);
	return (NULL);
}
/*#include <stdio.h>

int main(void)
{
    const char *str = "Hello, world!";
    int c = 'o';

    char *result = ft_strrchr(str, c);

    if (result)
        printf("Caracter '%c' encontrada la posición: %ld\n", c, result - str);
    else
        printf("Caracter '%c' no encontrado en la cadena.\n", c);

    return (0);
}*/
