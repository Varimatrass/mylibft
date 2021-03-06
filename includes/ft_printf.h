/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/17 14:10:15 by mde-jesu          #+#    #+#             */
/*   Updated: 2016/01/15 11:06:56 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <string.h>
# include <stdarg.h>

/*
** ZEROPAD : pad with zero.
** SIGN : unsigned / signed long.
** PLUS : show plus.
** SPACE : Space if plus.
** LEFT : left justified
** SMALL : Must be 32 == 0x20.
** SPECIAL : 0x.
*/

# define ZEROPAD 0
# define SIGN 2
# define PLUS 4
# define SPACE 8
# define LEFT 16
# define SMALL 32
# define SPECIAL 64

size_t	ft_selector(char *p, va_list *ap, size_t *incr);
size_t	ft_selector2(char *p, va_list *ap, size_t *n);
size_t	ft_printf(const char *format, ...);

#endif
