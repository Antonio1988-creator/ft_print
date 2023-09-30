/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:25:35 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/29 13:33:01 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*current;

	i = 0;
	current = lst;
	while (current)
	{
		i++;
		current = current->next;
	}
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*lst;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	int		lst_len;

	lst = NULL;
	node1 = ft_lstnew("Contenido 1");
	node2 = ft_lstnew("Contenido 2");
	node3 = ft_lstnew("Contenido 3");
	lst = node1;
	node1->next = node2;
	node2->next = node3;
	lst_len = ft_lstsize(lst);
	if (lst_len == 0)
		printf("La lista esta vacia.\n");
	else
		printf("La lista tiene %d elementos.\n", lst_len);
	return (0);
}*/
