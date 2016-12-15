/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/19 15:03:48 by mde-jesu          #+#    #+#             */
/*   Updated: 2016/01/15 11:08:48 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 4096

typedef struct		s_entry
{
	struct s_entry	*next;
	int				fd;
	char			*buf;
}					t_entry;

int					get_next_line(int const fd, char **line);

/*
** get_next as get_next_line but choose char limiter
*/
int					ft_get_next(const int fd, char **line, char c);

#endif
