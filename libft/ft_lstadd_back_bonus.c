/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:33:59 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/29 13:18:06 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (*lst == NULL)
		*lst = new;
	else
	{
		temp = *lst;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*lst;
	t_list	*node_1;
	t_list	*node_2;
	t_list	*new;
	t_list	*last_node;

	lst = NULL;
	node_1 = ft_lstnew("contenido 1");
	node_2 = ft_lstnew("contenido 2");
	new = ft_lstnew("contenido 3");
	lst = node_1;
	node_1->next = node_2;
	ft_lstadd_back(&lst, new);
	last_node = ft_lstlast(lst);
	printf("El ultimo nodo es: %s.\n", (char *)last_node->content);
	return (0);
}*/
