/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acohen <acohen@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 19:51:13 by acohen            #+#    #+#             */
/*   Updated: 2024/09/25 21:38:39 by acohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <unistd.h>

void	ft_lstclear(t_node **lst, void (*del)(void*))
{
	t_node	*current;
	t_node	*temp;

	current = *lst;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		del(temp);
	}
	*lst = NULL;
}
