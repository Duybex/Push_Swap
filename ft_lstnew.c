/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acohen <acohen@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:35:51 by acohen            #+#    #+#             */
/*   Updated: 2024/10/02 17:11:05 by acohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <unistd.h>

t_node	*ft_lstnew(int content)
{
	t_node	*node;

	node = malloc(2 * __SIZEOF_INT__ + __SIZEOF_POINTER__);
	if (node == NULL)
		return (NULL);
	node->next = NULL;
	node->content = content;
	node->index = -1;
	return (node);
}
