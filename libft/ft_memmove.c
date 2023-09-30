/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:44:58 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/28 15:01:34 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <unistd.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst_ptr;
	const unsigned char	*src_ptr;

	dst_ptr = (unsigned char *)dst;
	src_ptr = (const unsigned char *)src;
	if (dst_ptr < src_ptr)
	{
		while (len--)
			*dst_ptr++ = *src_ptr++;
	}
	else if (dst_ptr > src_ptr)
	{
		dst_ptr += len;
		src_ptr += len;
		while (len--)
			*(--dst_ptr) = *(--src_ptr);
	}
	return (dst);
}
/*
int main(void)
{
    char source[] = "Hello, World!";
    char destination[15];
    size_t length = sizeof(source);
    ft_memmove(destination, source, length);
    int error = 0;
    size_t i = 0;
    while (i < length)
    {
        if (source[i] != destination[i])
        {
            error = 1;
            break;
        }
        i++;
    }

    if (error)
    {
        write(1, "Error en el movimiento de memoria.\n", 35);
    }
    else
    {
        write(1, "El movimiento de memoria se realizó correctamente.\n", 51);
    }

    return (0);
}*/
