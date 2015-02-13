/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 18:08:20 by mde-jesu          #+#    #+#             */
/*   Updated: 2015/02/13 18:08:21 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

void	set_vec3(t_vec3 *vec, int x, int y, int z)
{
	vec->x = x;
	vec->y = y;
	vec->z = z;
}

t_bool	vec3_cmp(const t_vec3 *vec1, const t_vec3 *vec2)
{
	if (vec1->x != vec2->x)
		return (FALSE);
	if (vec1->y != vec2->y)
		return (FALSE);
	if (vec1->z != vec2->z)
		return (FALSE);
	return (TRUE);
}
