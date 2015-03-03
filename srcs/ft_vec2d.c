/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec2d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 18:08:14 by mde-jesu          #+#    #+#             */
/*   Updated: 2015/02/13 18:08:15 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

void	set_vec2d(t_vec2d *vec, double x, double y)
{
	vec->x = x;
	vec->y = y;
}

t_bool	vec2d_cmp(const t_vec2d *vec1, const t_vec2d *vec2)
{
	if (vec1->x == vec2->y && vec1->y == vec2->y)
		return (TRUE);
	return (FALSE);
}