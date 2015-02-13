/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 18:03:12 by mde-jesu          #+#    #+#             */
/*   Updated: 2015/02/13 18:03:14 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GET_NEXT_H
# define FT_GET_NEXT_H

# define BUFF_SIZE 4096

int				ft_get_next(const int fd, char **line, char c);

typedef struct	s_entry
{
	struct s_entry	*next;
	int				fd;
	char			*buf;
}				t_entry;

#endif
