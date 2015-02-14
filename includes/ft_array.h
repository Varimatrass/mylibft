/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 17:59:50 by mde-jesu          #+#    #+#             */
/*   Updated: 2015/02/13 18:00:13 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

# include "libft.h"

typedef struct	s_array
{
	void			*tab;
	size_t			size;
	size_t			capacity;
	size_t			size_change;
	size_t			size_type;
	unsigned int	it;
	t_flags			flags;
}				t_array;

t_array			*array_new(size_t capacity, size_t size_change,
						size_t size_type, t_flags flags);
t_array			*array_cpy(const t_array *src);
t_array			*array_add(t_array *arr, void *value);
t_array			*array_set(t_array *arr, void *value, unsigned int index);
t_array			*array_insert(t_array *arr, void *value, unsigned int index);
t_array			*array_remove(t_array *arr, unsigned int index);
t_array			*array_clear(t_array *arr, t_bool b);
t_array			*array_resize(t_array *arr, t_bool auto_resize);
void			*array_get(t_array *arr, unsigned int index);
void			*array_next(t_array *arr);
void			array_free(t_array **arr);

# define A_G(arr, index) array_get(arr, index)
# define A_N(arr) array_next(arr)

# define A_GI(arr, index)  (*(int *)array_get(arr, index))
# define A_GUI(arr, index) (*(unsigned int *)array_get(arr, index))

# define A_C(arr, index)  (*(char *)A_G(arr, index))
# define A_S(arr, index)  (*(char **)A_G(arr, index))

t_array				*ft_strsplitstr(const char *s, const char *s1);

#endif
