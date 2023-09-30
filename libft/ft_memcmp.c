/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:43:34 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/22 12:25:13 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;
	size_t				i;

	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return ((int)(ptr1[i] - ptr2[i]));
		i++;
	}
	return (0);
}
/*
int main(void)
{
    const char str1[] = "Hello, world!";
    const char str2[] = "Hello, there!";
    size_t n = 12;

    int result = ft_memcmp(str1, str2, n);

    if (result == 0)
    {
        printf("Los primeros %zu bytes son iguales.\n", n);
    }
    else if (result < 0)
    {
        printf("Bytes: %zu. Cadena 2 mayor.\n", n);
    }
    else
    {
        printf("Bytes: %zu.Cadena 1 mayor.\n", n);
    }

    return 0;
}*/
