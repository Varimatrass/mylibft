/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 23:14:30 by mde-jesu          #+#    #+#             */
/*   Updated: 2015/02/05 15:54:04 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_get_start(char const *s)
{
	size_t	i;

	i = 0;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i] != '\0')
		i++;
	return (i);
}

static size_t	ft_get_end(char const *s)
{
	size_t	i;

	i = ft_strlen(s);
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == '\0')
			&& i > 0)
		i--;
	i++;
	return (i);
}

char			*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;

	start = ft_get_start(s);
	end = ft_get_end(s);
	if (start > end)
		end = start;
	return (ft_strsub(s, start, end - start));
}
