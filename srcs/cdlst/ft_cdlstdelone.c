/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cdlstdelone.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/24 20:25:26 by mde-jesu          #+#    #+#             */
/*   Updated: 2017/03/02 16:52:06 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_cdlstdelone(t_cdlst **alst, void (*del)(void *, size_t))
{
	t_cdlst	*tmp;

	tmp = *alst;
	tmp->prev->next = tmp->next;
	tmp->next->prev = tmp->prev;
	del(tmp->content, tmp->content_size);
	free(tmp);
	*alst = NULL;
}
