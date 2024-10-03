/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acohen <acohen@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:20:06 by acohen            #+#    #+#             */
/*   Updated: 2024/10/03 18:27:17 by acohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	test(t_stack *stack)
{
	ft_printf("a:\n");
	print_stack(stack);
	indexing(stack);
	ft_printf("a:\n");
	print_stack(stack);
	// rrr(stack);
	// rrr(stack);
	pb(stack);
	pb(stack);
	ft_printf("a:\n");
	print_stack(stack);

}

int	main(int argc, char *argv[])
{
	int		array[argc - 1];
	t_stack	*stack;

	if (argc < 2)
		return (1);
	stack = malloc(sizeof(t_stack));
	if(stack == NULL)
		return (1);
	ini_stacks(stack);
	if (str_to_int_array(argv, argc , array) == 0)
	{
		ft_printf("Error\n");
		free_all (stack);
		return (1);
	}
	if (check_dups(array, argc - 1) == 0)
	{
		ft_printf("Error\n");
		free_all(stack);
		return (1);
	}
	array_to_stack(array, argc, stack);
	test(stack);
	free_all(stack);
	return (0);
}
