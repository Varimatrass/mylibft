/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 22:56:07 by mde-jesu          #+#    #+#             */
/*   Updated: 2015/02/05 09:58:19 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t				i;
	unsigned char		*byte1;
	const unsigned char	*byte2;
	unsigned char		cc;

	byte1 = (unsigned char *)s1;
	byte2 = (unsigned char *)s2;
	i = 0;
	cc = (unsigned char)c;
	if (s1 && s2 && n)
	{
		while (i < n)
		{
			if ((*byte1++ = *byte2++) == cc)
				return (byte1);
			i++;
		}
	}
	return (NULL);
}
