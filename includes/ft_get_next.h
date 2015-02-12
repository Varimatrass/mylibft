/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlancar <dlancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/09 13:05:49 by dlancar           #+#    #+#             */
/*   Updated: 2015/02/12 17:54:23 by mde-jesu         ###   ########.fr       */
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
