/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cdlstmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/24 21:03:37 by mde-jesu          #+#    #+#             */
/*   Updated: 2017/02/24 21:03:53 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_cdlstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*res;
	t_list	*temp;

	res = f(lst);
	lst = lst->next;
	while (lst)
	{
		temp = f(lst);
		if (!temp)
			return (NULL);
		ft_lstpush(res, temp);
		lst = lst->next;
	}
	return (res);
}
