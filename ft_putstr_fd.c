/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acohen <acohen@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 13:05:37 by acohen            #+#    #+#             */
/*   Updated: 2024/09/25 21:53:59 by acohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putstr_fd(char *str, int fd)
{
	if (str != NULL)
	{
		while (*str)
			write(fd, str++, 1);
	}
	else
		(ft_putstr_fd ("(null)", fd));
}
