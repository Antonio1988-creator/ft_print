/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:26:21 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/26 16:33:26 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str_add;
	size_t	s1_len;
	size_t	s2_len;
	size_t	s_len_total;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	s_len_total = s1_len + s2_len;
	str_add = malloc((s_len_total + 1) * sizeof(char));
	if (!str_add)
		return (NULL);
	ft_strlcpy(str_add, s1, s1_len + 1);
	ft_strlcat(str_add, s2, s_len_total + 1);
	return (str_add);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str_one = "Hola, ";
	char	*str_two = "don Pepito";

	printf("%s", ft_strjoin(str_one, str_two));
	return (0);
}*/
