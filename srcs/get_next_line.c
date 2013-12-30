/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/05 12:09:12 by mde-jesu          #+#    #+#             */
/*   Updated: 2013/12/30 03:23:07 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*fill_buff(int const fd, char *tmp, char *tmp_to_free)
{
	char	*buff;
	int		len_read;

	if ((buff = (char *)malloc((BUFF_SIZE + 1) * sizeof(char))) == NULL)
		return (NULL);
	tmp = (char *)malloc(sizeof(char));
	tmp[0] = '\0';
	len_read = read(fd, buff, BUFF_SIZE);
	while (len_read > 0)
	{
		buff[len_read] = '\0';
		tmp = ft_strjoin(tmp, buff);
		len_read = read(fd, buff, BUFF_SIZE);
	}
	free(buff);
	tmp_to_free = &tmp[0];
	return (tmp);
}

int			get_next_line(int const fd, char **line)
{
	static char	*tmp;
	static char	*tmp_to_free;
	int			i;

	i = 0;
	if (tmp == NULL)
		tmp = fill_buff(fd, tmp, tmp_to_free);
	if (tmp == NULL)
		return (-1);
	while (tmp[i] != '\n' && tmp[i] != 0)
		i++;
	line[0] = (char *)malloc(i * sizeof(char));
	line[0][i] = '\0';
	i = 0;
	while (tmp[i] != 10 && tmp[i] != 0)
	{
		line[0][i] = tmp[i];
		i++;
	}
	if (tmp[i] == 10)
	{
		tmp = &tmp[i + 1];
		return (1);
	}
	free(tmp_to_free);
	return (0);
}
