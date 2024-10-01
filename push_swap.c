/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acohen <acohen@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:20:06 by acohen            #+#    #+#             */
/*   Updated: 2024/10/01 16:51:52 by acohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		array[argc - 1];
	t_stack	*stack;

	initilize_array(array, argc - 1);
	if (argc < 2)
		return (1);
	stack = malloc(sizeof(t_node) + __SIZEOF_INT__);
	if (stack == NULL)
		return (1);
	if (str_to_int_array(argv, argc , array) == 0)
	{
		ft_printf("Error\n");
		free (stack);
		return (1);
	}
	if (check_dups(array, argc - 1) == 0)
	{
		ft_printf("Error\n");
		free (stack);
		return (1);
	}
	array_to_stack(array, argc, stack);
	print_stack(stack);
	ft_printf("%i, %i, %i\n", array[0], array[1], stack->size);
	ft_lstclear(&stack->top, ft_lstdelone);
	free (stack);
	return (1);
}
