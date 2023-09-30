/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:15:20 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/26 09:41:37 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	len;
	int		i;

	if (!s || !f)
		return (NULL);
	len = 0;
	while (s[len])
		len++;
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
#include <stdio.h>
#include <unistd.h>

char	my_function(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (c);
	else
		return (c + 1);
}

int	main(void)
{
	char	*input = "Hello, World!";
	char	*output;
	int		i;

	output = ft_strmapi(input, &my_function);
	if (output)
	{
		i = 0;
		while (output[i])
		{
			write(1, &output[i], 1);
			i++;
		}
		free(output);
	}
	else
		printf("ft_strmapi returned NULL\n");
	return (0);
}*/
