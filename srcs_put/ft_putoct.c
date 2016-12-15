/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putoct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 09:31:03 by mde-jesu          #+#    #+#             */
/*   Updated: 2015/02/13 09:32:20 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putoct(unsigned int n)
{
	size_t	i;

	i = 0;
	if (n > 7)
	{
		i += ft_putoct(n / 8);
		i += ft_putoct(n % 8);
	}
	else
		i += ft_putchar('0' + n);
	return (i);
}
