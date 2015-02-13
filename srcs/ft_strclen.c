/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 09:35:38 by mde-jesu          #+#    #+#             */
/*   Updated: 2015/02/13 09:35:40 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Return the length of the nul or c terminated string
*/

size_t	ft_strclen(const char *s, char c)
{
	size_t	res;

	res = 0;
	if (!s || !*s)
		return (res);
	while (*s && *s != c)
	{
		res++;
		s++;
	}
	return (res);
}
