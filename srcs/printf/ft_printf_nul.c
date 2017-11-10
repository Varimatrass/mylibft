/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/17 14:09:32 by mde-jesu          #+#    #+#             */
/*   Updated: 2015/02/12 17:17:50 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

size_t	ft_selector(char *p, va_list *ap, size_t *n)
{
	*n = *n + 1;
	if (p[*n] == 'd' || p[*n] == 'i')
		return (ft_putnbr(va_arg(*ap, int)));
	else if (p[*n] == 'u')
		return (ft_putunbr(va_arg(*ap, unsigned int)));
	else if (p[*n] == 's')
		return (ft_putstr(va_arg(*ap, char*)));
	else if (p[*n] == 'c')
		return (ft_putchar(va_arg(*ap, int)));
	else if (p[*n] == 'o')
		return (ft_putoct(va_arg(*ap, unsigned int)));
	else if (p[*n] == 'x')
		return (ft_puthexa(va_arg(*ap, unsigned int)));
	else if (p[*n] == 'X')
		return (ft_puthexa_maj(va_arg(*ap, unsigned int)));
	else if (p[*n] == 'p')
		return (ft_putptr(va_arg(*ap, unsigned long)));
	else
		return (0);
}

size_t	ft_selector2(char *p, va_list *ap, size_t *n)
{
	if (p[*n] == 'l')
	{
		*n = *n + 1;
		if (p[*n] == 'd')
			return (ft_putlong(va_arg(*ap, long)));
		else
			return (ft_putstr("%l") + ft_putchar(p[*n]));
	}
	else
		return (ft_putchar(p[*n]));
}

size_t	ft_printf(const char *format, ...)
{
	va_list		ap;
	char		*p;
	size_t		i;
	size_t		n;

	i = 0;
	n = 0;
	p = NULL;
	va_start(ap, format);
	p = (char *)format;
	while (p[n] != '\0')
	{
		if (p[n] != '%')
			i += ft_putchar(p[n]);
		else
		{
			if ((i += ft_selector(p, &ap, &n)) == 0)
				i += ft_selector2(p, &ap, &n);
		}
		n++;
	}
	va_end(ap);
	return (i);
}
