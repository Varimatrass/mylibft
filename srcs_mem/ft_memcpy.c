/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 22:55:33 by mde-jesu          #+#    #+#             */
/*   Updated: 2015/02/12 17:10:50 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t		i;
	char		*byte1;
	const char	*byte2;

	byte1 = (char *)s1;
	byte2 = (char *)s2;
	i = 0;
	while (i < n)
	{
		byte1[i] = byte2[i];
		i++;
	}
	return (s1);
}
