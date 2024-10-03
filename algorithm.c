/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acohen <acohen@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:53:59 by acohen            #+#    #+#             */
/*   Updated: 2024/10/03 16:52:59 by acohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	indexing(t_stack *a)
{
	int	min;
	int	i;

	i = 0;
	while (i < a->size_a)
	{
		min = find_unindexed_min(a);
		write_index(a, min, i);
		i++;
	}
}

int	find_unindexed_min(t_stack *a)
{
	t_node	*temp;
	long	min;
	
	min = __LONG_MAX__;
	temp = a->top_a;
	while (temp)
	{
		if (temp->content < min && temp->index == -1)
			min = temp->content;
		temp = temp->next;
	}
	return (min);
}

void	write_index(t_stack *a, int min, int i)
{
	t_node	*temp;

	temp = a->top_a;
	while (temp)
	{
		if (temp->content == min)
			break;
		temp = temp->next;
	}
	temp->index = i;
}