/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec3_cmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 18:08:20 by mde-jesu          #+#    #+#             */
/*   Updated: 2016/01/28 11:56:24 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_vec3_cmp(const t_vec3 *vec1, const t_vec3 *vec2)
{
	if (vec1->x != vec2->x)
		return (FALSE);
	if (vec1->y != vec2->y)
		return (FALSE);
	if (vec1->z != vec2->z)
		return (FALSE);
	return (TRUE);
}
