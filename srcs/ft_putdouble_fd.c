/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdouble_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 18:06:56 by mde-jesu          #+#    #+#             */
/*   Updated: 2015/02/13 18:06:57 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putdouble_fd(double d, int fd)
{
	int		i;

	i = 0;
	ft_putnbr_fd((int)d, fd);
	ft_putchar_fd('.', fd);
	d -= (int)d;
	while (i++ < 6)
		d *= 10;
	ft_putnbr_fd(d, fd);
}
