/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acohen <acohen@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 13:05:37 by acohen            #+#    #+#             */
/*   Updated: 2024/09/25 21:38:00 by acohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "push_swap.h"

static int	is_white_space(char c)
{
	if ((c > 8 && c < 14) || c == 32)
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	long int	num;
	int			sign;

	sign = 1;
	num = 0;
	while (is_white_space(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		num = num * 10 + *str - '0';
		str++;
	}
	return (sign * num);
}
