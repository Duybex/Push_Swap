/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acohen <acohen@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:43:18 by acohen            #+#    #+#             */
/*   Updated: 2024/09/25 21:37:51 by acohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_white_space(char c)
{
	if ((c > 8 && c < 14) || c == 32)
		return (1);
	else
		return (0);
}

int	is_number(char *string)
{
	int	i;
	int	check;

	i = 0;
	check = 0;
	while (is_white_space(string[i]))
		i++;
	if (string[i] == '-' || string[i] == '+')
		i++;
	if (ft_isdigit(string[i]) == 1)
		check = 1;
	while (string[i] && check == 1)
	{
		if (ft_isdigit(string[i]) != 1)
			check = 0;
		i++;
	}
	return (check);
}

int	check_dups(int *array, int size)
{
	int	i1;
	int	i2;
	int	check;

	i1 = 2;
	check = 1;
	while (i1 < size)
	{
		i2 = i1 + 1;
		while (i2 <= size)
		{
			if (array[i1] != array[i2])
				check = 0;
			i2++;
		}
		i1++;
	}
	return (check);
}

void	del_node(t_node node)
{
	free (node.content);
	free (node.next);
}

void	del_stack(t_stack stack)
{
	ft_lstclear(stack.top, (void *)del_node);
}