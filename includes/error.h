/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 18:02:38 by mde-jesu          #+#    #+#             */
/*   Updated: 2015/02/13 18:02:39 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERROR_H
# define ERROR_H

# include "libft.h"
# include <errno.h>

# define ERR_DISP_NONE   1
# define ERR_DISP_PERROR 2
# define ERR_DISP_AUTO   4
# define ERR_FATAL       8

# define ERR_GET         3

t_flags		error_opt(t_flags flags);
int			ft_error(void);
int			ft_error_msg(const char *msg, ...);
int			ft_perror(void);

#endif
