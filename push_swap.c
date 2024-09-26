/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acohen <acohen@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:20:06 by acohen            #+#    #+#             */
/*   Updated: 2024/09/26 16:45:51 by acohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	// t_stack	t_stack;
	int		array[argc - 1];

	if (argc < 2)
		return (1);
	if (str_to_int_array(argv, argc, array) == 0)
	{
		ft_printf("Error\n");
		return (1);
	}
	ft_printf("%i, %i, %i\n", array[0], array[1], array[2]);
	// if (check_dups(array, argc) == 0)
	// {
	// 	ft_printf ("Error\n");
	// 	return (1);
	// }
	// t_stack.size = 0;
	return (1);
}
