/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_snprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 18:07:21 by mde-jesu          #+#    #+#             */
/*   Updated: 2015/02/13 18:07:22 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

/*
** Same function as printf but the content is stored in the string
** s instead of being printed.
** Return the number of characters that has been stored or a negative value
** if an error occured.
** DONT WORK
*/

int		ft_snprintf(char *s, size_t n, const char *format, ...)
{
	va_list			ap;
	unsigned int	res;

	res = 0;
	va_start(ap, format);
	while (*format && res < n)
	{
		if (*format == '%' && format++)
		{
			if (*format == 's')
			{
				ft_strcpy(s, va_arg(ap, char *));
				while (*s)
					s++;
				s--;
			}
		}
		else
			*s = *format;
		while ((s++ && format++ && res++) && 0)
			;
	}
	*s = '\0';
	va_end(ap);
	return (0);
}
