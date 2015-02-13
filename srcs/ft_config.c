/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_config.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 18:05:56 by mde-jesu          #+#    #+#             */
/*   Updated: 2015/02/13 18:05:57 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*get_env(const char *name)
{
	extern char	**environ;
	int			i;
	size_t		size;

	i = 0;
	size = ft_strlen(name);
	while (environ[i])
	{
		if (ft_strcmp(environ[i], name) == 61)
			return (environ[i] + size + 1);
		i++;
	}
	return (NULL);
}

char	*get_path(int index)
{
	static t_array	*path = NULL;

	if (!path)
		path = ft_strsplit(get_env("PATH"), ':');
	if (index < 0)
	{
		array_free(&path);
		return (NULL);
	}
	if ((unsigned int)index >= path->size)
		return (NULL);
	return (*(char **)array_get(path, index));
}
