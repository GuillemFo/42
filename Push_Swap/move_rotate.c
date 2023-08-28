/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:16:56 by gforns-s          #+#    #+#             */
/*   Updated: 2023/08/28 14:01:45 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*general_rotate(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack;
	while (stack->next != NULL)
		stack = stack->next;
	stack->next = tmp;
	stack = tmp->next;
	tmp->next = NULL;
}

t_stack	rotate_a(t_stack *a)
{
	a = general_rotate(a);
	ft_printf("ra\n");
}

t_stack	rotate_b(t_stack *b)
{
	b = general_rotate(b);
	ft_printf("ra\n");
}

//Call function with &

void	rotate_rotate(t_stack **a, t_stack **b)
{
	general_rotate(a);
	general_rotate(b);
	ft_printf("rr\n");
}
