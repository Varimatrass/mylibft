/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/12 13:05:35 by mde-jesu          #+#    #+#             */
/*   Updated: 2015/02/12 13:06:13 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstpush(t_list *list, t_list *new)
{
	t_list	*next;
	t_list	*it;

	it = list;
	while (it->next)
		it = it->next;
	next = list->next;
	it->next = new;
	new->next = next;
	return (list);
}
