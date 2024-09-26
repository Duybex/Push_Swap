/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acohen <acohen@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:48:17 by acohen            #+#    #+#             */
/*   Updated: 2024/09/26 16:45:58 by acohen           ###   ########.fr       */
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

t_stack	array_to_stack(int *array, int size)
{
	int		i;
	t_stack	stack;
	t_node	*temp;

	i = size - 1;
	stack.size = 0;
	stack.top = NULL;
	while (i >= 0) 
	{
		temp = ft_lstnew(array[i]);
		if (temp == NULL)
		{
			ft_lstclear(stack.top, ft_lstdelone);
			return(stack);
		}
		ft_lstadd_front(stack.top, temp);
		i--;
	}
	return(stack);
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
