/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acohen <acohen@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 17:29:06 by acohen            #+#    #+#             */
/*   Updated: 2024/09/25 21:39:19 by acohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <unistd.h>

int	ft_lstsize(t_node *lst)
{
	int		count;
	t_node	*temp;

	temp = lst;
	count = 0;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
