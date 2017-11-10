/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cdlstcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/24 21:01:23 by mde-jesu          #+#    #+#             */
/*   Updated: 2017/02/24 21:01:29 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	del(void *d, size_t s)
{
	free(d);
	(void)s;
}

t_list		*ft_cdlstcpy(t_list *lst)
{
	t_list	*new;
	t_list	*ret;
	t_list	*tmp;

	if (!lst)
		return (NULL);
	if (!(new = ft_lstnew(lst->content, lst->content_size)))
		return (NULL);
	ret = new;
	while (lst->next)
	{
		lst = lst->next;
		tmp = NULL;
		if (!(tmp = ft_lstnew(lst->content, lst->content_size)))
		{
			ft_lstdel(&ret, del);
			return (NULL);
		}
		new->next = tmp;
		new = new->next;
	}
	return (ret);
}
