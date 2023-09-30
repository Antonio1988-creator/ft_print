/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:37:44 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/29 16:48:43 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	numwords(char const *s, char c)
{
	int	cur;
	int	word_num;

	cur = 0;
	word_num = 0;
	while (s[cur] != '\0')
	{
		if (s[cur] != c && (s[cur + 1] == c || s[cur + 1] == '\0'))
			word_num++;
		cur++;
	}
	return (word_num);
}

static int	allocate_words(char **result, char const *s, char c)
{
	int		start_cur;
	int		end_cur;
	int		word;

	end_cur = 0;
	start_cur = 0;
	word = 0;
	while (s[end_cur])
	{
		if (s[end_cur] == c || s[end_cur] == '\0')
			start_cur = end_cur + 1;
		if (s[end_cur] != c && (s[end_cur + 1] == c || s[end_cur + 1] == '\0'))
		{
			result[word] = malloc(sizeof(char) * (end_cur - start_cur + 2));
			if (!result[word])
				return (word);
			ft_strlcpy(result[word], (s + start_cur), end_cur - start_cur + 2);
			word++;
		}
		end_cur++;
	}
	result[word] = NULL;
	return (-1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		allocation_error;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (numwords(s, c) + 1));
	if (!result)
		return (NULL);
	allocation_error = allocate_words(result, s, c);
	if (allocation_error != -1)
	{
		while (allocation_error >= 0)
			free(result[allocation_error--]);
		free(result);
		return (NULL);
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	char const *input_string = "Esta es una cadena de ejemplo para dividir";
	char c = ' ';
	char **result = ft_split(input_string, c);

	if (result)
	{
		int i = 0;
		while (result[i])
		{
			printf("%s\n", result[i]);
			free(result[i]);
			i++;
		}
		free(result);
	}
	else
	{
		printf("Error en la función ft_split\n");
	}
	return (0);
}*/
