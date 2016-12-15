/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoinf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 09:36:10 by mde-jesu          #+#    #+#             */
/*   Updated: 2016/01/29 10:35:45 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Return a new string composed of the concanation of s1 and s2, not more than
** n character will copied from s2.
** If flag == 1, s1 will be free, if flag == 2, s2 will be free, if flag == 3,
** s1 and s2 will be both free.
*/

char	*ft_strnjoinf(char *s1, char *s2, size_t n, unsigned int flag)
{
	char	*res;

	res = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!res)
		return (NULL);
	ft_strcpy(res, s1);
	ft_strncat(res, s2, n);
	if (flag & 1)
		free(s1);
	if (flag & 2)
		free(s2);
	return (res);
}
