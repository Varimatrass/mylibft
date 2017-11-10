/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cdlstadd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/24 20:08:46 by mde-jesu          #+#    #+#             */
/*   Updated: 2017/03/02 16:49:55 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_cdlstadd(t_cdlst **alst, t_cdlst *new)
{
	t_cdlst	*l;

	l = *alst;
	new->next = *alst;
	if (l->prev != NULL)
	{
		new->prev = l->prev;
		l->prev->next = new;
	}
	else
	{
		new->prev = *alst;
		l->next = new;
	}
	l->prev = new;
}
