/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cdlstaddp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 15:43:56 by mde-jesu          #+#    #+#             */
/*   Updated: 2017/02/28 15:52:56 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_cdlstaddp(t_cdlst **alst, t_cdlst *new)
{
	t_cdlist	*prevl;

	prevl = *alst->next;
	new->next = *prevl;
	if (*prevl->prev != NULL)
	{
		new->prev = *prevl->prev;
		*prevl->prev->next = new;
	}
	else
	{
		new->prev = *prevl;
		*prevl->next = new
	}
	*prevl->prev = new;
}
