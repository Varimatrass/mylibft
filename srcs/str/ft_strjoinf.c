/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 18:07:40 by mde-jesu          #+#    #+#             */
/*   Updated: 2016/01/29 10:34:25 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Return a new string composed of the concanation of s1 and s2.
** If flag = 1, s1 will be free at the end of the process, if flag = 2 s2 will
** be free, if flag = 3 both string will be free.
*/

char	*ft_strjoinf(char *s1, char *s2, t_flags flag)
{
	char	*res;

	res = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!res)
		return (NULL);
	ft_strcpy(res, s1);
	ft_strcat(res, s2);
	if (flag & 1)
		free(s1);
	if (flag & 2)
		free(s2);
	return (res);
}
