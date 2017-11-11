/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb_new.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 16:47:46 by mde-jesu          #+#    #+#             */
/*   Updated: 2017/11/11 17:48:34 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_rb_new(t_rb *newrb, size_t const capacity, size_t const datasize)
{
	newrb->start = malloc(datasize * capacity);
	if (newrb->start != NULL)
	{
		newrb->used = 0;
		ft_bzero(newrb->start, datasize * capacity);
		newrb->b_end = newrb->start + (capacity - 1) * datasize;
		newrb->capacity = capacity;
		newrb->datasize = datasize;
		newrb->head = new_rb->start;
		newrb->tail = new_rb->start;
		return (TRUE);
	}
	else
		return (FALSE);
}
