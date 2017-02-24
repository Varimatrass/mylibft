/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cdlstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/24 20:10:58 by mde-jesu          #+#    #+#             */
/*   Updated: 2017/02/24 20:19:50 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_cdlst	*ft_cdlstnew(void const *content, size_t content_size)
{
	t_cdlst	*newlst;

	if ((newlst = (t_cdlst*)ft_memalloc(sizeof(t_cdlst))) == NULL)
		return (NULL);
	if (content == NULL)
	{
		newlst->content = NULL;
		newlst->content_size = 0;
	}
	else
	{
		if ((newlst->content = (void *)ft_memalloc(content_size)) != NULL)
			ft_memcpy(newlst->content, content, content_size);
		else
		{
			free(newlst);
			return (NULL);
		}
		newlst->content_size = content_size;
		newlst->next = NULL;
		newlst->prev = NULL;
	}
	return (newlst);
}
