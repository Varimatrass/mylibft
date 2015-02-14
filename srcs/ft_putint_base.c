/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 18:07:10 by mde-jesu          #+#    #+#             */
/*   Updated: 2015/02/13 18:07:15 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_array.h"

static void	ft_put_base(unsigned int n, unsigned int base, t_bool upper)
{
	if (base > 10 && n >= 10)
	{
		n -= 10;
		if (upper)
			ft_putchar(n + 'A');
		else
			ft_putchar(n + 'a');
	}
	else
		ft_putchar(n + '0');
}

int			ft_putuint_base(unsigned int n, unsigned int base)
{
	t_array	*res;
	t_uint	temp;
	int		i;

	res = array_new(5, 5, sizeof(unsigned int), PTR);
	while (n)
	{
		temp = n % base;
		array_add(res, &temp);
		n /= base;
	}
	i = res->size;
	if (i == 0)
	{
		ft_putchar('0');
		return (1);
	}
	while (i--)
		ft_put_base(((unsigned int*)res->tab)[i], base, TRUE);
	i = res->size;
	array_free(&res);
	return (i);
}

int			ft_putuint_base_l(unsigned int n, unsigned int base)
{
	t_array	*res;
	t_uint	temp;
	int		i;

	res = array_new(5, 5, sizeof(unsigned int), FALSE);
	while (n)
	{
		temp = n % base;
		array_add(res, &temp);
		n /= base;
	}
	i = res->size;
	if (i == 0)
	{
		ft_putchar('0');
		return (1);
	}
	while (i--)
		ft_put_base(((unsigned int*)res->tab)[i], base, FALSE);
	i = res->size;
	array_free(&res);
	return (i);
}
