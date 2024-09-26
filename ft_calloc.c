/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acohen <acohen@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 13:05:37 by acohen            #+#    #+#             */
/*   Updated: 2024/09/25 21:38:11 by acohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "push_swap.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	full_size;

	full_size = nmemb * size;
	if (size != 0)
	{
		if (full_size != 0 && full_size / size != nmemb)
			return (NULL);
	}
	ptr = malloc(size * nmemb);
	if (ptr != NULL)
		ft_bzero(ptr, (nmemb * size));
	return (ptr);
}
