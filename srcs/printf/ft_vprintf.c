/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 18:08:33 by mde-jesu          #+#    #+#             */
/*   Updated: 2015/02/13 18:08:34 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>

void	ft_vprintf(const char *str, va_list ap)
{
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == '%')
				ft_putchar('%');
			else if (*str == 'c')
				ft_putchar(va_arg(ap, int));
			else if (*str == 's')
				ft_putstr(va_arg(ap, char*));
			else if (*str == 'd')
				ft_putnbr(va_arg(ap, int));
			else if (*str == 'f')
				ft_putdouble(va_arg(ap, double));
		}
		else
			ft_putchar(*str);
		str++;
	}
}
