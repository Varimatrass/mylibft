/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_AVLnewnode.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/24 22:14:45 by mde-jesu          #+#    #+#             */
/*   Updated: 2017/02/24 22:26:54 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_avln	*ft_avlnewnode(void const *content, size_t content_size)
{
	t_avln	*node;

	if ((node = (t_avln*)ft_memalloc(sizeof(t_avln))) == NULL)
		return (NULL);
	if (content == NULL)
	{
		new_list->content = NULL;
		new_list->content_size = 0;
	}
	else
	{
		if ((node->content = (void *)ft_memalloc(content_size)) != NULL)
			ft_memcpy(node->content, content, content_size);
		else
		{
			free(node);
			return (NULL);
		}
		node->content_size = content_size;
		node->par = NULL;
		node->right = NULL;
		node->left = NULL;
		node->height = 1;
	}
	return (node);
}
