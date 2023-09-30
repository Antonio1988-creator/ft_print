/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:38:28 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/22 12:23:58 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
//#include <stdio.h>

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	void	*arr;

	arr = malloc(num_elements * element_size);
	if (!arr)
		return (NULL);
	ft_bzero(arr, num_elements * element_size);
	return (arr);
}
/*
int	main(void)
{
	size_t num_elements = 5;
	size_t element_size = sizeof(int);
	int	*arr;

	arr = (int *)ft_calloc(num_elements, element_size);

	if (!arr)
	{
		printf("Error: No se pudo asignar memoria.\n");
		return (1);
	}
	size_t i = 0;
    while (i < num_elements)
    {
        printf("arr[%zu] = %d\n", i, arr[i]);
        i++;
    }
    free(arr);
    return (0);
}*/
