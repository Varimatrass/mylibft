/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/19 15:02:48 by mde-jesu          #+#    #+#             */
/*   Updated: 2015/02/12 17:57:29 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#include "libft.h"
#include "get_next_line.h"

int					get_next_line(int fd, char **line)
{
	return (ft_get_next(fd, line, '\n'));
}
