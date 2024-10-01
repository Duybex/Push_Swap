/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstonetolast.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acohen <acohen@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:05:50 by acohen            #+#    #+#             */
/*   Updated: 2024/10/01 18:06:29 by acohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ft_lstonetolast(t_node *lst)
{
	t_node	*current;

	if (lst == NULL)
		return (NULL);
	current = lst;
	while (current->next->next != NULL)
		current = current->next;
	return (current);
}