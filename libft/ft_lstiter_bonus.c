/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:24:28 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/28 19:45:18 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		if (f)
			f(lst->content);
		lst = lst->next;
	}
}
/*
#include "libft.h"
#include <stdio.h>

void	custom_function(void *content)
{
	int *data = (int *)content;
	*data *= 2;
}

int	main(void)
{
    t_list	*lst;
	int		data1 = 42;
	int		data2 = 100;

	lst = ft_lstnew(&data1);
	ft_lstadd_back(&lst, ft_lstnew(&data2));
	printf("Valores antes de aplicar ft_lstiter:\n");
	printf("Elemento 1: %d\n", data1);
	printf("Elemento 2: %d\n", data2);
	printf("Aplicando ft_lstiter...\n");
	ft_lstiter(lst, custom_function);
	printf("Valores después de aplicar ft_lstiter:\n");
	printf("Elemento 1: %d\n", data1);
	printf("Elemento 2: %d\n", data2);
    return (0);
}*/
