/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:28:41 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/22 12:25:05 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	size_t				i;

	i = 0;
	ptr = s;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
		{
			return ((void *)(ptr + i));
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n);

int main(void)
{
	const char str[] = "Hello, world!";
	char search_char = 'o';
	size_t search_size = 6;
	void *result = ft_memchr(str, (int)search_char, search_size);
	if (result != NULL)
		printf("El carácter '%c' en la dirección: %p\n", search_char, result);
	else
		printf("El carácter '%c' no fue encontrado\n", search_char);
	return (0);
}*/
