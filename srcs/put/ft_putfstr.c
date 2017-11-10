/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 18:07:04 by mde-jesu          #+#    #+#             */
/*   Updated: 2015/02/13 18:07:05 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putfstr(const char *s1, const void *arg)
{
	while (*s1)
	{
		if (*s1 == '%')
		{
			s1++;
			if (*s1 == '%')
				ft_putchar('%');
			else if (*s1 == 'c')
				ft_putchar(*((char*)arg));
			else if (*s1 == 's')
				ft_putstr((char*)arg);
			else if (*s1 == 'd')
				ft_putnbr(*((int*)arg));
		}
		else
			ft_putchar(*s1);
		s1++;
	}
}
