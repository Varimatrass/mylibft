/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cdlstiter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/24 21:03:08 by mde-jesu          #+#    #+#             */
/*   Updated: 2017/02/24 21:03:30 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_cdlstiter(t_list *lst, void (*f)(t_list *elem))
{
	if (lst)
	{
		f(lst);
		if (lst->next != NULL)
			ft_lstiter(lst->next, f);
	}
}
