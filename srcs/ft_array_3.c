/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 18:05:49 by mde-jesu          #+#    #+#             */
/*   Updated: 2015/02/13 18:05:50 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_array.h"
#include <stdlib.h>

t_array		*array_clear(t_array *arr, t_bool b)
{
	arr->it = 0;
	while (arr->it < arr->size)
	{
		if (b)
			free(array_get(arr, arr->it));
		arr->it++;
	}
	ft_bzero(arr->tab, arr->size * arr->size_type);
	arr->size = 0;
	arr->it = 0;
	return (arr);
}
