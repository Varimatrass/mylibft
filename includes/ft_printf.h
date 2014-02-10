/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/17 14:10:15 by mde-jesu          #+#    #+#             */
/*   Updated: 2014/02/10 23:13:30 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

# ifndef STRING_H
#  define STRING_H
#  include <string.h>
# endif /* !STRING_H */

# ifndef STDARG_H
#  define STDARG_H
#  include <stdarg.h>
# endif /* !STDARG_H */

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

#endif /*!FT_PRINTF*/
