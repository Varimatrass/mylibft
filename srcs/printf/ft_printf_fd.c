/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 18:06:40 by mde-jesu          #+#    #+#             */
/*   Updated: 2015/02/13 18:06:41 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>

void	ft_printf_fd(int fd, const char *str, ...)
{
	va_list		ap;

	va_start(ap, str);
	ft_vprintf_fd(fd, str, ap);
	va_end(ap);
}
