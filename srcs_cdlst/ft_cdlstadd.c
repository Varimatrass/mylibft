/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cdlstadd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/24 20:08:46 by mde-jesu          #+#    #+#             */
/*   Updated: 2017/02/24 20:49:21 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_cdlstadd(t_cdlst **l, t_cdlst *new)
{
	new->next = *alst;
	if (*alst->prev != NULL)
	{
		new->prev = *alst->prev;
		*alst->prev->next = new;
	}
	else
	{
		new->prev = *alst;
		*alst->next = new
	}
	*alst->prev = new;
}
