/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:10:23 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/28 18:51:33 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		if (del)
			del(lst->content);
		free(lst);
	}
}
/*
#include "libft.h"

void	custom_del(void *content)
{
	int *data = (int *)content;
	free(data);
}

#include <stdio.h>

int	main(void)
{
    t_list *lst;

	int *int_data = malloc(sizeof(int));
	*int_data = 42;
	lst = ft_lstnew(int_data);
	printf("Valor antes de eliminar el nodo: %d\n", *(int *)lst->content);
	ft_lstdelone(lst, custom_del);
	printf("Valor después de eliminar el nodo: %d\n", *(int *)lst->content);
	return (0);
}*/
