/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_AVLnewtree.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/24 22:00:31 by mde-jesu          #+#    #+#             */
/*   Updated: 2017/02/24 22:25:36 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_avlt	*ft_avlnewtree(void)
{
	t_avlt	*tree;

	if (tree = (t_avlt)ft_memalloc(sizeof(t_avlt) == NULL))
		return NULL;
	tree->root = NULL;

	return (tree);
}
