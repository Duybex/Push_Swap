/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acohen <acohen@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:20:06 by acohen            #+#    #+#             */
/*   Updated: 2024/10/01 17:16:13 by acohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		array[argc - 1];
	t_stack	*a;
	t_stack *b;

	initilize_array(array, argc - 1);
	if (argc < 2)
		return (1);
	malloc_stacks(a, b);
	if (a == NULL)
		return (1);
	if (b == NULL)
	{
		free (a);
		return (1);
	}
	if (str_to_int_array(argv, argc , array) == 0)
	{
		ft_printf("Error\n");
		free (a);
		return (1);
	}
	if (check_dups(array, argc - 1) == 0)
	{
		ft_printf("Error\n");
		free (a);
		return (1);
	}
	array_to_stack(array, argc, a);
	print_stack(a);
	ft_printf("%i, %i, %i\n", array[0], array[1], a->size);
	free_all(a, b);
	return (1);
}
