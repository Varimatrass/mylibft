/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 18:06:03 by mde-jesu          #+#    #+#             */
/*   Updated: 2015/02/13 18:06:03 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

int		ft_round(double d)
{
	if ((long int)d == 0)
		return (0);
	if (d > 0)
	{
		if (d - (long int)d > 0.5)
			return ((long int)d + 1);
		return (d);
	}
	if (d - (long int)d > 0.5)
		return ((long int)d - 1);
	return ((long int)d);
}

double	ft_trunc(double d, t_uint p)
{
	double			temp;
	double			res;
	t_uint			i;

	i = 0;
	res = (long long int)d;
	d -= (long long int)d;
	while (i < p)
	{
		temp = d * 10;
		temp = (long long int)temp;
		temp /= ft_pow(10, i + 1);
		d *= 10;
		d -= (long long int)d;
		res += temp;
		i++;
	}
	return (res);
}