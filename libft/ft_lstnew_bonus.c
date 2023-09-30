/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:27:41 by anguil-l          #+#    #+#             */
/*   Updated: 2023/09/29 12:23:55 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (new_node == NULL)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*
int	main(void)
{
	char *data = "Hello, world!";
	t_list *node = ft_lstnew(data);

	if (node)
	{
		if (node->content)
			ft_putstr_fd(node->content, 1);
		else
			ft_putstr_fd("El contenido del nodo es nulo.", 1);
		free(node);
	}
	else
		ft_putstr_fd("Error: No se pudo crear un nuevo nodo.", 1);
	return (0);
}*/
