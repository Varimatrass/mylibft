/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 23:13:02 by mde-jesu          #+#    #+#             */
/*   Updated: 2015/02/05 15:37:49 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*copy;

	i = 0;
	if (!s)
		return (NULL);
	if ((copy = (char *)malloc((len + 1) * sizeof(char))) == NULL)
		return (NULL);
	copy[len] = '\0';
	while (i < len)
	{
		copy[i] = s[start + i];
		i++;
	}
	return (copy);
}
