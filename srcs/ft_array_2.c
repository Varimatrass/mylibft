/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 18:05:42 by mde-jesu          #+#    #+#             */
/*   Updated: 2015/02/13 18:05:43 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "error.h"
#include "libft.h"
#include "ft_array.h"

t_array	*array_set(t_array *arr, void *value, unsigned int index)
{
	if (arr->flags & PTR)
		ft_memcpy((arr->tab + (index * arr->size_type)), &value,
					arr->size_type);
	else
		ft_memcpy((arr->tab + (index * arr->size_type)), value, arr->size_type);
	return (arr);
}

void	*array_get(t_array *arr, unsigned int index)
{
	return (arr->tab + (arr->size_type * index));
}

void	*array_next(t_array *arr)
{
	if ((arr->flags & LOOP) && arr->it >= arr->size)
		arr->it = 0;
	if (arr->it < arr->size)
	{
		arr->it++;
		return (arr->tab + (arr->size_type * (arr->it - 1)));
	}
	return (NULL);
}

t_array	*array_cpy(const t_array *src)
{
	t_array	*res;

	res = array_new(src->capacity, src->size_change, src->size_type,
					src->flags);
	if (!res)
		return (NULL);
	res->size = src->size;
	ft_memcpy(res->tab, src->tab, src->size * src->size_change);
	return (res);
}

t_array	*array_remove(t_array *arr, unsigned int index)
{
	unsigned int	i;

	arr->size--;
	i = index;
	while (i < arr->size)
	{
		ft_memcpy(arr->tab + i * arr->size_type, arr->tab + (i + 1)
				* arr->size_type, arr->size_type);
		i++;
	}
	return (arr);
}