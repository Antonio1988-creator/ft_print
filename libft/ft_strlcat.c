/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:55:09 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/22 12:57:49 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	x;
	unsigned int	i;

	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	x = ft_strlen(dst);
	i = 0;
	while (src[i] != '\0' && x < size -1 && size > 0)
	{
		dst[x] = src[i];
		x++;
		i++;
	}
	dst[x] = '\0';
	if (dest_len > size)
		dest_len = size;
	return (dest_len + src_len);
}
/*
int main(void)
{
    char dest[20] = "Hello, ";
    const char *src = "world!";
    size_t size = 20;

    size_t result = ft_strlcat(dest, src, size);

    printf("Concatenated string: %s\n", dest);
    printf("Result of ft_strlcat: %zu\n", result);

    return (0);
}*/
