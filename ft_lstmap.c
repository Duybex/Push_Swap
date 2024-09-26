/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acohen <acohen@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 20:37:18 by acohen            #+#    #+#             */
/*   Updated: 2024/09/25 21:39:07 by acohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <unistd.h>

t_node	*ft_lstmap(t_node *lst, void *(*f)(void *), void (*del)(void *))
{
	t_node	*current;
	t_node	*new;
	t_node	*temp;

	current = lst;
	new = NULL;
	while (current != NULL)
	{
		temp = ft_lstnew(f(current->content));
		if (temp == NULL)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, temp);
		current = current->next;
	}
	return (new);
}
