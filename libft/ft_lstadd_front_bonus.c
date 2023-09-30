/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 12:32:49 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/29 13:20:41 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	t_list *lst = NULL;
	t_list *new1 = (t_list *)malloc(sizeof(t_list));
	t_list *new2 = (t_list *)malloc(sizeof(t_list));

	if (!new1 || !new2)
	{
		printf("Error al asignar memoria para un nuevo nodo");
		return (1);
	}
	new1->content = "Elemento 1";
	new1->next = NULL;
	new2->content = "Elemento 2";
	new2->next = NULL;
	printf("Lista antes de agregar:\n");
	printf("Elemento 1: %s\n", (char *)new1->content);
	printf("Elemento 2: %s\n", (char *)new2->content);
	ft_lstadd_front(&lst, new1);
	ft_lstadd_front(&lst, new2);
	printf("\nLista después de agregar:\n");
	printf("Elemento 2: %s\n", (char *)lst->content);
	printf("Elemento 1: %s\n", (char *)lst->next->content);
	free(new1);
	free(new2);
	return (0);
}*/
