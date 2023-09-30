/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 19:03:37 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/22 12:59:09 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	while (*haystack && len >= needle_len)
	{
		if (*haystack == *needle && ft_strncmp(haystack,
				needle, needle_len) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
/*
#include <stddef.h>
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

int	main(void)
{
	const char haystack[] = "This is a simple example.";
	const char needle[] = "simple";
	size_t len = 20;
	char *result = ft_strnstr(haystack, needle, len);
	if (result != NULL)
 		printf("Subcadena encontrada: %s\n", result);
	else
		printf("Subcadena no encontrada.\n");
	return (0);
}*/
