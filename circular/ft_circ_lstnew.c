/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_circ_lstnew.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/14 10:58:59 by mde-jesu          #+#    #+#             */
/*   Updated: 2014/01/14 10:59:07 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_circ_list	*ft_circ_lstnew(void const *content, size_t content_size)
{
	t_circ_list	*new_list;

	if ((new_list = (t_list*)ft_memalloc(sizeof(t_list))) == NULL)
		return (NULL);
	if (content == NULL)
	{
		new_list->content = NULL;
		new_list->content_size = 0;
	}
	else
	{
		if ((new_list->content = (void *)ft_memalloc(content_size)) != NULL)
			ft_memcpy(new_list->content, content, content_size);
		else
		{
			free(new_list);
			return (NULL);
		}
		new_list->content_size = content_size;
		new_list->next = NULL;
	}
	new_list->curse = 0;
	new_list->first = 0;
	return (new_list);
}
