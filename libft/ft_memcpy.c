/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcopy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:33:38 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/26 18:03:22 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <unistd.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dest_ptr;
	const char	*src_ptr;
	size_t		i;

	dest_ptr = dst;
	src_ptr = src;
	i = 0;
	if (dst == NULL && src == NULL && n > 0)
		return (NULL);
	while (i < n)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	const char src[] = "Hello, World!";
	char dest[15];
	size_t n = sizeof(src);
	ft_memcpy(dest, src, n);
	int error = 0;
	size_t i = 0;
	while (i < n && !error)
	{
		if (src[i] != dest[i])
			error = 1;
		i++;
	}
	if (error)
		write(1, "Error al copiar los datos.\n", 28);
	else
		write(1, "Los datos se copiaron correctamente.\n", 37);
	return (0);
}*/
