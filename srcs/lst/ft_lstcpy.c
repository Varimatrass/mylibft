/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/12 11:28:01 by mde-jesu          #+#    #+#             */
/*   Updated: 2015/02/12 11:44:31 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	del(void *d, size_t s)
{
	free(d);
	(void)s;
}

t_list		*ft_lstcpy(t_list *lst)
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
