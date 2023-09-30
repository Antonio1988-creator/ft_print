/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:51:39 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/21 16:19:19 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <unistd.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
/*
int	main(void)
{
	char	buffer[10];
	size_t	size;
	size_t	i;

	size = sizeof(buffer);
	ft_bzero(buffer, size);
	i = 0;
	while (i < size)
	{
		if (buffer[i] != 0)
		{
			write(1, "El arreglo no contiene solo ceros.\n", 36);
			return (1);
		}
		i++;
	}
	write(1, "El arreglo contiene solo ceros.\n", 33);
	return (0);
}*/
