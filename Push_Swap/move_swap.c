/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:16:29 by gforns-s          #+#    #+#             */
/*   Updated: 2023/08/23 17:19:37 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


t_stack	*general_swap(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack->next;
	stack->next = tmp->next;
	tmp->next = stack;
	return (tmp);
}

t_stack	*swap_a(t_stack *a)
{
	a = general_swap(a);
	return (a);
}

t_stack	*swap_b(t_stack *b)
{
	b = general_swap(b);
	return (b);
}
/* la B no funciona porque esta vacia??*/
/* hay que capar cuando sean valores de <3*/

void	swap_ss(t_stack *a, t_stack *b)
{
	a = swap_a(a);
	b = swap_b(b);
	ft_printf("ss done\n");
}
