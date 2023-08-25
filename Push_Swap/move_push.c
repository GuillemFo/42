/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:17:21 by gforns-s          #+#    #+#             */
/*   Updated: 2023/08/25 11:19:27 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*pa (push a): Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.*/

void	general_push(t_stack *a, t_stack *b)
{
	t_stack	*tmp;

	if (b || b->next != NULL)
	{
		tmp = a;
		a = b;
		a->next = tmp->next;
		b = b->next;
	}
	ft_printf("pa\n");

}
