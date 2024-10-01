/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acohen <acohen@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:19:30 by acohen            #+#    #+#             */
/*   Updated: 2024/10/01 21:18:30 by acohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *a)
{
	t_node	*temp;
	t_node	*temp2;

	if (a->size > 1)
	{
		temp = a->top;
		temp2 = a->top->next->next;
		a->top = a->top->next;
		a->top->next = temp;
		a->top->next->next = temp2;
	}
}

void	sb(t_stack *b)
{
	t_node	*temp;
	t_node	*temp2;

	if (b->size > 1)
	{
		temp = b->top;
		temp2 = b->top->next->next;
		b->top = b->top->next;
		b->top->next = temp;
		b->top->next->next = temp2;
	}
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
}

void	pa(t_stack *a, t_stack *b)
{
	t_node	*temp;
	t_node	*temp2;

	if (b->size > 0)
	{
		temp = a->top;
		temp2 = b->top->next;
		a->top = b->top;
		a->top->next = temp;
		b->top = temp2;
		a->size++;
		b->size--;
	}
}

void	pb(t_stack *a, t_stack *b)
{
	t_node	*temp;
	t_node	*temp2;

	if (a->size > 0)
	{
		temp = b->top;
		temp2 = a->top->next;
		b->top = a->top;
		b->top->next = temp;
		a->top = temp2;
		b->size++;
		a->size--;
	}
}

void	ra(t_stack *a)
{
	t_node	*old_top;
	if (a->size > 1)
	{
		old_top = a->top;
		a->top = a->top->next;
		old_top->next = NULL;
		ft_lstlast(a->top)->next = old_top;
	}
}

void	rb(t_stack *b)
{
	t_node	*old_top;

	if (b->size > 1)
	{
		old_top = b->top;
		b->top = b->top->next;
		old_top->next = NULL;
		ft_lstlast(b->top)->next = old_top;
	}
}

void	rr(t_stack *a, t_stack *b)
{
	ra(a);
	rb(b);
}

void	rra(t_stack *a)
{
	t_node	*old_last;
	t_node	*temp;
	
	if (a->size > 1)
	{
		old_last = ft_lstlast(a->top);
		ft_lstonetolast(a->top)->next = NULL;
		temp = a->top;
		a->top = old_last;
		a->top->next = temp;
	}
}

void	rrb(t_stack *b)
{
	t_node	*old_last;
	t_node	*temp;
	
	if (b->size > 1)
	{
		old_last = ft_lstlast(b->top);
		ft_lstonetolast(b->top)->next = NULL;
		temp = b->top;
		b->top = old_last;
		b->top->next = temp;
	}
}

void	rrr(t_stack *a, t_stack *b)
{
	rra(a);
	rrb(b);
}
