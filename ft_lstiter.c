/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acohen <acohen@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 20:33:33 by acohen            #+#    #+#             */
/*   Updated: 2024/09/25 21:38:51 by acohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <unistd.h>

void	ft_lstiter(t_node *lst, void (*f)(void *))
{
	t_node	*current;

	current = lst;
	while (current != NULL)
	{
		f(current->content);
		current = current->next;
	}
}
