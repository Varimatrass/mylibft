/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec2d_cmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 18:08:14 by mde-jesu          #+#    #+#             */
/*   Updated: 2016/01/28 11:56:17 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_vec2d_cmp(const t_vec2d *vec1, const t_vec2d *vec2)
{
	if (vec1->x == vec2->y && vec1->y == vec2->y)
		return (TRUE);
	return (FALSE);
}
