/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplitstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 18:08:06 by mde-jesu          #+#    #+#             */
/*   Updated: 2015/02/13 18:08:07 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_array.h"
#include <stdlib.h>

t_array		*ft_strsplitstr(const char *s, const char *s1)
{
	t_array		*res;
	int			i;
	char		*temp;

	(res = array_new(100, 10, sizeof(char *), PTR));
	i = 0;
	while (*s)
	{
		while (*s && ft_strchr(s1, *s))
			s++;
		while (s[i] && !ft_strchr(s1, s[i]))
			i++;
		if (!*s)
			return (res);
		temp = ft_strndup(s, i);
		if (!temp)
		{
			array_free(&res);
			return (NULL);
		}
		array_add(res, temp);
		(s += i, i = 0);
	}
	return (res);
}
