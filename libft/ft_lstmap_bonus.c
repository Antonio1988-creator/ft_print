/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:45:41 by anguil-l          #+#    #+#             */
/*   Updated: 2023/10/03 20:07:50 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*current;
	t_list	*new_node;
	void	*new_content;

	new_lst = NULL;
	current = lst;
	while (current)
	{
		new_content = f(current->content);
		if (!new_content)
			return (NULL);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		current = current->next;
	}
	return (new_lst);
}
/*
#include <stdio.h>
#include <stdlib.h>

void	*duplicate_int(void *data)
{
	int	*num = (int *)data;
	int	*result = malloc(sizeof(int));

	if (result)
		*result = *num * 2;
	return (result);
}

void	delete_int(void *data)
{
	free(data);
}

int	main(void)
{
	t_list	*node_1;
	t_list	*node_2;
	t_list	*node_3;
	t_list	*new_list;
	int		*num;

	node_1 = ft_lstnew((int *)malloc(sizeof(int)));
	node_2 = ft_lstnew((int *)malloc(sizeof(int)));
	node_3 = ft_lstnew((int *)malloc(sizeof(int)));
	if (!node_1 || !node_2 || !node_3)
		return (1);
	*(int *)node_1->content = 1;
	*(int *)node_2->content = 2;
	*(int *)node_3->content = 3;
	node_1->next = node_2;
	node_2->next = node_3;
	node_3->next = NULL;
	new_list = ft_lstmap(node_1, duplicate_int, delete_int);
	while (new_list)
	{
		num = (int *)new_list->content;
		printf("%d ", *num);
		new_list = new_list->next;
	}
	printf("\n");
	ft_lstclear(&new_list, delete_int);
	return (0);
}*/
