/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_cdlist.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 15:54:06 by mde-jesu          #+#    #+#             */
/*   Updated: 2017/02/28 16:00:49 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main()
{
	t_cdlst	*l;
	int		i;

	i = 10
	l = ft_cdlstnew((void*)10, sizeof(int));
	while (--i > 0)
		ft_cdlstadd(&l, ft_cdlstnew((void*)i, sizeof(int)));
	
	printf("%i", l->content);
}
