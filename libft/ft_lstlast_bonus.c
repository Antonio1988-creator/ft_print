/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:09:40 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/29 14:31:05 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*lst;
	t_list	*node_1;
	t_list	*node_2;
	t_list	*node_3;
	t_list	*last_node;

	lst = NULL;
	node_1 = ft_lstnew("Contenido 1");
	node_2 = ft_lstnew("Contenido 2");
	node_3 = ft_lstnew("Contenido 3");
	lst = node_1;
	node_1->next = node_2;
	node_2->next = node_3;
	last_node = ft_lstlast(lst);
	printf("El contenido del ultimo nodo es: %s.\n", (char *)last_node->content);
	return (0);
}*/
