/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:17:21 by gforns-s          #+#    #+#             */
/*   Updated: 2023/08/25 13:33:34 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*pa (push a): Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.*/

void	general_push(t_stack *stack1, t_stack *stack2)
{
	t_stack	*tmp = NULL;
	t_stack *tmp2 = NULL;

	tmp = stack1;
	tmp2 = stack2->next;
	stack2->next = tmp->next;
	tmp->next = tmp2;
	
	ft_printf("pa\n");

}
//crear una temporal usarla de nodo 0 e ir añadiendo?