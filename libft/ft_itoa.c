/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:49:06 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/26 14:01:42 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	ft_put_nbr(char *dest, unsigned int n)
{
	if (n < 10)
	{
		*dest = n + '0';
	}
	else
	{
		*dest = n % 10 + '0';
		ft_put_nbr(dest - 1, n / 10);
	}
}

static size_t	ft_num_len(int n)
{
	size_t	c;

	c = 0;
	while (n)
	{
		n /= 10;
		c++;
	}
	return (c);
}

static size_t	ft_set_len(int n)
{
	size_t	len;

	if (n < 0)
		len = ft_num_len(n) + 1;
	else
		len = ft_num_len(n);
	return (len);
}

static unsigned int	ft_set_sign(int n, unsigned int num)
{
	if (n < 0)
		return (-num);
	return (num);
}

char	*ft_itoa(int n)
{
	size_t			len;
	unsigned int	num;
	char			*pt_itoa;

	num = n;
	if (n == 0)
		return (ft_strdup("0"));
	else
	{
		len = ft_set_len(n);
		pt_itoa = malloc(sizeof(char) * (len + 1));
		if (!pt_itoa)
			return (NULL);
		num = ft_set_sign(n, num);
		ft_put_nbr(pt_itoa + len - 1, num);
		if (n < 0)
			*pt_itoa = '-';
		pt_itoa[len] = '\0';
	}
	return (pt_itoa);
}
/*
#include <stdio.h>

int	main(void)
{
	int n = -12345;
	char *result = ft_itoa(n);

	if (result)
	{
		printf("Resultado: %s\n", result);
		free(result);
	}
	else
		printf("Error en la función ft_itoa\n");
	return (0);
}*/
