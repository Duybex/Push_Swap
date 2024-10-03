/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acohen <acohen@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:19:30 by acohen            #+#    #+#             */
/*   Updated: 2024/10/03 18:52:37 by acohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack)
{
	t_node	*temp;
	t_node	*temp2;

	if (stack->size_a > 1)
	{
		temp = stack->top_a;
		temp2 = stack->top_a->next->next;
		stack->top_a = stack->top_a->next;
		stack->top_a->next = temp;
		stack->top_a->next->next = temp2;
		if(stack->size_a > 1)
		{
			stack->top_a->previous = ft_lstlast(stack->top_a);
			stack->top_a->next->previous = stack->top_a;
		}
	}
	ft_printf("sa");
}

void	sb(t_stack *stack)
{
	t_node	*temp;
	t_node	*temp2;

	if (stack->size_b > 1)
	{
		temp = stack->top_b;
		temp2 = stack->top_b->next->next;
		stack->top_b = stack->top_b->next;
		stack->top_b->next = temp;
		stack->top_b->next->next = temp2;
		if(stack->size_b > 1)
		{
			stack->top_b->previous = ft_lstlast(stack->top_b);
			stack->top_b->next->previous = stack->top_b;
		}
	}
	ft_printf("sb");
}

void	ss(t_stack *stack)
{
	sa(stack);
	sb(stack);
}

void	pa(t_stack *stack)
{
	t_node	*temp;
	t_node	*temp2;

	if (stack->size_b > 0)
	{
		temp = stack->top_a;
		temp2 = stack->top_b->next;
		stack->top_a = stack->top_b;
		stack->top_a->next = temp;
		stack->top_b = temp2;
		stack->size_a++;
		stack->size_b--;
		if(stack->size_a > 1)
		{
			stack->top_a->previous = ft_lstlast(stack->top_a);
			stack->top_a->next->previous = stack->top_a;
		}
		if(stack->size_b > 1)
		{
			stack->top_b->previous = ft_lstlast(stack->top_b);
			stack->top_b->next->previous = stack->top_b;
		}
	}
}

void	pb(t_stack *stack)
{
	t_node	*temp;
	t_node	*temp2;

	if (stack->size_a > 0)
	{
		temp = stack->top_b;
		temp2 = stack->top_a->next;
		stack->top_b = stack->top_a;
		stack->top_b->next = temp;
		stack->top_a = temp2;
		stack->size_b++;
		stack->size_a--;
		if(stack->size_a > 1)
		{
			stack->top_a->previous = ft_lstlast(stack->top_a);
			stack->top_a->next->previous = stack->top_a;
		}
		if(stack->size_b > 1)
		{
			stack->top_b->previous = ft_lstlast(stack->top_b);
			stack->top_b->next->previous = stack->top_b;
		}
	}
}

void	ra(t_stack *stack)
{
	t_node	*old_top;
	if (stack->size_a > 1)
	{
		old_top = stack->top_a;
		stack->top_a = stack->top_a->next;
		old_top->next = NULL;
		ft_lstlast(stack->top_a)->next = old_top;
	}
}

void	rb(t_stack *stack)
{
	t_node	*old_top;

	if (stack->size_b > 1)
	{
		old_top = stack->top_b;
		stack->top_b = stack->top_b->next;
		old_top->next = NULL;
		ft_lstlast(stack->top_b)->next = old_top;
	}
}

void	rr(t_stack *stack)
{
	ra(stack);
	rb(stack);
}

void	rra(t_stack *stack)
{
	t_node	*old_last;
	t_node	*temp;
	
	if (stack->size_a > 1)
	{
		old_last = ft_lstlast(stack->top_a);
		ft_lstonetolast(stack->top_a)->next = NULL;
		temp = stack->top_a;
		stack->top_a = old_last;
		stack->top_a->next = temp;
	}
}

void	rrb(t_stack *stack)
{
	t_node	*old_last;
	t_node	*temp;
	
	if (stack->size_b > 1)
	{
		old_last = ft_lstlast(stack->top_b);
		ft_lstonetolast(stack->top_b)->next = NULL;
		temp = stack->top_b;
		stack->top_b = old_last;
		stack->top_b->next = temp;
	}
}

void	rrr(t_stack *stack)
{
	rra(stack);
	rrb(stack);
}
