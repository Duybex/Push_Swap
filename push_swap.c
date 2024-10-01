/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acohen <acohen@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:20:06 by acohen            #+#    #+#             */
/*   Updated: 2024/10/01 21:12:15 by acohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	test(t_stack *a, t_stack *b)
{
	ft_printf("a:");
	print_stack(a);
	ft_printf("b:");
	print_stack(b);
	pb(a, b);
	pb(a, b);
	pb(a, b);
	ft_printf("a:");
	print_stack(a);
	ft_printf("b:");
	print_stack(b);
	rr(a, b);
	ft_printf("a:");
	print_stack(a);
	ft_printf("b:");
	print_stack(b);
	rrr(a, b);
	ft_printf("a:");
	print_stack(a);
	ft_printf("b:");
	print_stack(b);
	ss(a, b);
	ft_printf("a:");
	print_stack(a);
	ft_printf("b:");
	print_stack(b);
}

int	main(int argc, char *argv[])
{
	int		array[argc - 1];
	t_stack	*a;
	t_stack	*b;

	if (argc < 2)
		return (1);
	a = malloc(sizeof(t_node) + __SIZEOF_INT__);
	if(a == NULL)
		return (1);
	b = malloc(sizeof(t_node) + __SIZEOF_INT__);
	if(b == NULL)
	{
		free (a);
		return (1);
	}
	ini_stacks(a, b);
	if (str_to_int_array(argv, argc , array) == 0)
	{
		ft_printf("Error\n");
		free_all (a, b);
		return (1);
	}
	if (check_dups(array, argc - 1) == 0)
	{
		ft_printf("Error\n");
		free_all(a, b);
		return (1);
	}
	array_to_stack(array, argc, a);
	test(a, b);
	free_all(a, b);
	return (1);
}
