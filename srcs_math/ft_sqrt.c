/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 18:06:29 by mde-jesu          #+#    #+#             */
/*   Updated: 2016/01/15 12:04:11 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_uint	ft_sqrt(t_uint n)
{
	unsigned long int	res;

	res = 0;
	while (res * res < n)
		res++;
	if (n - (res - 1) * (res - 1) < n - res * res)
		return (res - 1);
	return ((t_uint)res);
}
