/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acohen <acohen@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 13:05:37 by acohen            #+#    #+#             */
/*   Updated: 2024/09/25 21:55:19 by acohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

size_t	ft_strlen(const char *str)
{
	int	c;

	c = 0;
	if (str == NULL)
		return (6);
	while (str [c] != '\0')
	{
		c++;
	}
	return (c);
}
