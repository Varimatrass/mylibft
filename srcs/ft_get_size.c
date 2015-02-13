/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 18:06:18 by mde-jesu          #+#    #+#             */
/*   Updated: 2015/02/13 18:06:19 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_get_size(int n)
{
	unsigned int	res;
	double			d;

	res = 0;
	d = (n > 0) ? (double)n : -((double)n);
	if (n == 0)
		return (1);
	while ((long int)d > 0)
	{
		d /= 10;
		res++;
	}
	if (n < 0)
		res++;
	return (res);
}
