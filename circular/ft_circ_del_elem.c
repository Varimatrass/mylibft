/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_circ_del_elem.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/14 13:16:12 by mde-jesu          #+#    #+#             */
/*   Updated: 2014/01/14 13:17:33 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*del_curse(t_list *args)
{
	t_list	*tmp;
	t_list	*to_delet;

	tmp = args;
	if (args->next->first == 1)
		exit(0);
	if (args->curse == 1 || args->curse == 3)
	{
		while (tmp->next->first != 1)
			tmp = tmp->next;
		tmp->next = args->next;
		free(args);
		tmp->next->first = 1;
		return (tmp->next);
	}
	while (tmp->next->curse != 1 && tmp->next->curse != 3)
		tmp = tmp->next;
	to_delet = tmp->next;
	tmp->next = tmp->next->next;
	tmp->next->next->curse += 1;
	free(to_delet);
	return (args);
}
