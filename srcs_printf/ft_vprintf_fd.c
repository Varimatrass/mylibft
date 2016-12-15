/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vprintf_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 18:08:40 by mde-jesu          #+#    #+#             */
/*   Updated: 2015/02/13 18:08:40 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>

void	ft_vprintf_fd(int fd, const char *str, va_list ap)
{
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == '%')
				ft_putchar_fd('%', fd);
			else if (*str == 'c')
				ft_putchar_fd(va_arg(ap, int), fd);
			else if (*str == 's')
				ft_putstr_fd(va_arg(ap, char*), fd);
			else if (*str == 'd')
				ft_putnbr_fd(va_arg(ap, int), fd);
			else if (*str == 'f')
				ft_putdouble_fd(va_arg(ap, double), fd);
		}
		else
			ft_putchar(*str);
		str++;
	}
}
