/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:51:42 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/27 12:53:10 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	j;

	j = 0;
	if (size > 0)
	{
		while (src[j] != '\0' && (j + 1) < size)
		{
			dst[j] = src[j];
			j++;
		}
		dst[j] = '\0';
	}
	return (ft_strlen(src));
}
/*int main(void)
{
    char source[] = "Hello, World!";
    char destination[15];
    size_t size = sizeof(destination);

    printf("Valor ft_strlen: %zu\n", ft_strlcpy(destination, source, size));
	printf("%s\n", source);
	printf("%s\n", destination); 
    return 0;
}*/
