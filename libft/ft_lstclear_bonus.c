/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:39:31 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/28 18:50:33 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !*lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		next = current->next;
		del(current->content);
		free(current);
		current = next;
	}
	*lst = NULL;
}
/*
void	custom_del(void *content)
{
	int *data = (int *)content;
	free(data);
}

#include <stdio.h>

int main()
{
    t_list *lst;

    int *int_data = malloc(sizeof(int));
    *int_data = 42;
    lst = ft_lstnew(int_data);
    printf("Valor antes de eliminar el nodo: %d\n", *(int *)lst->content);
    ft_lstclear(&lst, custom_del);
    if (lst == NULL)
    {
        printf("La lista se ha eliminado correctamente.\n");
    }
    return (0);
}*/
