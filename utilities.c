/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acohen <acohen@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:48:17 by acohen            #+#    #+#             */
/*   Updated: 2024/10/01 17:46:41 by acohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	str_to_int_array(char **string, int size, int *int_array)
{
	int	i;
	int	check;

	i = 1;
	check = 1;
	while (i < size && check == 1)
	{
		if (is_number(string[i]))
		{
			int_array[i - 1] = ft_atoi(string[i]);
			i++;
		}
		else
			check = 0;
	}
	return (check);
}

void	array_to_stack(int *array, int size, t_stack *stack)
{
	int		i;
	t_node	*temp;

	i = size - 2;
	stack->size = 0;
	stack->top = NULL;
	while (i >= 0) 
	{
		temp = ft_lstnew(array[i]);
		if (temp == NULL)
		{
			ft_lstclear(&stack->top, ft_lstdelone);
			break;
		}
		ft_lstadd_front(&stack->top, temp);
		i--;
		stack->size = stack->size + 1;
	}
}

void	print_node(t_node *node)
{
	ft_printf("%i\n", node->content);
}

void	print_stack(t_stack *stack)
{
	t_node	*current;
	int		i;

	i = stack->size;
	current = stack->top;
	
	while (i > 0)
	{
		print_node(current);
		i--;
		current = current->next;
	}
}

void	malloc_stacks(t_stack *a, t_stack *b)
{
	a = malloc(sizeof(t_node) + __SIZEOF_INT__);
	b = malloc(sizeof(t_node) + __SIZEOF_INT__);
	if (a && b)
	{
		a->size = 0;
		b->size = 0;
		a->top = NULL;
		b->top = NULL;
	}
}

void	free_all(t_stack *a, t_stack *b)
{
	ft_lstclear(&a->top, ft_lstdelone);
	ft_lstclear(&b->top, ft_lstdelone);
	free (a);
	free (b);
}

// void	push(t_stack t_stack, int num)
// {
// 	t_node	*new;

// 	new = ft_lstnew(num);
// 	if (new == NULL)
// 		return (NULL);
// 	ft_lstadd_front(t_stack.top, new);
// 	t_stack.size++;
// }
