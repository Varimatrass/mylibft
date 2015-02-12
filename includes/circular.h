/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   circular.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/14 10:55:31 by mde-jesu          #+#    #+#             */
/*   Updated: 2015/02/12 17:19:54 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CIRCULAR_H
# define CIRCULAR_H

# include "libft.h"

typedef struct			s_circ_list
{
	void				*content;
	size_t				content_size;
	size_t				curse;
	char				first;
	struct s_circ_list	*next;
}						t_circ_list;

#endif
