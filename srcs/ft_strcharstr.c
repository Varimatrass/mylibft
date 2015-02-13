/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcharstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 18:07:35 by mde-jesu          #+#    #+#             */
/*   Updated: 2015/02/13 18:07:35 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

/*
** Return the position of the first occurence of s1 in s2. Return NULL if s1
** has no common character with s2.
*/
char	*ft_strcharstr(const char *s1, const char *s2)
{
	char	*temp;

	temp = (char *)s2;
	while (*s1)
	{
		while (*s2)
		{
			if (*s1 == *s2)
				return ((char *)s2);
			s2++;
		}
		s2 = temp;
		s1++;
	}
	return (NULL);
}
