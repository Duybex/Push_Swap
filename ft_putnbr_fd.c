/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acohen <acohen@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 13:05:37 by acohen            #+#    #+#             */
/*   Updated: 2024/09/25 21:54:04 by acohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	int		d;
	long	num;

	num = n;
	d = 1;
	if (num < 0)
	{
		write (fd, "-", 1);
		num = -num;
	}
	while (num / d >= 10)
		d = d * 10;
	while (d != 0)
	{
		c = '0' + (num / d);
		write (fd, &c, 1);
		num = num % d;
		d = d / 10;
	}
}
