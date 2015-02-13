/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_maj.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 09:32:40 by mde-jesu          #+#    #+#             */
/*   Updated: 2015/02/13 09:33:01 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_puthexa_maj(unsigned int n)
{
	size_t	i;

	i = 0;
	if (n > 15)
	{
		i += ft_puthexa_maj(n / 16);
		i += ft_puthexa_maj(n % 16);
	}
	else
	{
		if (n <= 9)
			i += ft_putchar('0' + n);
		else
			i += ft_putchar('A' + n - 10);
	}
	return (i);
}
