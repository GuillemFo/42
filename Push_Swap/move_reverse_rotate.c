/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_reverse_rotate.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:33:08 by gforns-s          #+#    #+#             */
/*   Updated: 2023/09/02 12:32:12 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*general_reverse_rotate(t_stack *stack)
{
	t_stack	*top;
	t_stack	*bottom;
	t_stack	*tmp;

	top = stack;
	if (stack->next->next == NULL)
	{
		top = stack;
		stack = stack->next;
		bottom = stack;
		bottom->next = top;
		stack->next = NULL;
	}
	else
	{
		while (stack->next->next && stack->next->next != NULL)
			stack = stack->next;
		tmp = stack->next;
		stack->next = NULL;
		bottom = tmp;

		bottom->next = top;
	}
	return (bottom);
}

t_stack	*reverse_rotate_a(t_stack *a)
{
	a = general_reverse_rotate(a);
	ft_printf("rra\n");
	return (a);
}

t_stack	*reverse_rotate_b(t_stack *b)
{
	b = general_reverse_rotate(b);
	ft_printf("rrb\n");
	return (b);
}

void	reverse_rotate_rotate(t_stack **a, t_stack **b)
{
	*a = general_reverse_rotate(*a);
	*b = general_reverse_rotate(*b);
	ft_printf("rrr\n");
}
