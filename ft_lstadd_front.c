/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acohen <acohen@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 17:18:22 by acohen            #+#    #+#             */
/*   Updated: 2024/10/03 16:50:50 by acohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <unistd.h>

void	ft_lstadd_front(t_stack *stack, t_node *new)
{
	if(stack->top_a)
		stack->top_a->previous = new;
	new->next = stack->top_a;
	stack->top_a = new;
}
