/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 09:33:25 by mde-jesu          #+#    #+#             */
/*   Updated: 2015/02/13 09:33:31 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putptr(unsigned long n)
{
	if (n == 0)
		return (ft_putstr(0x0));
	else
		return (ft_putstr("0xfff") + ft_puthexa(n));
}
