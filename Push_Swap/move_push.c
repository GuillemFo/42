/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:17:21 by gforns-s          #+#    #+#             */
/*   Updated: 2023/08/28 08:11:51 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*pb (push b): Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty.*/

void	general_push(t_stack *stack1, t_stack *stack2)
{
	t_stack	*tmp = NULL;
	t_stack *tmp2 = NULL;

	tmp = stack1;
	tmp2 = stack2;
	stack2->next = stack1;
	
	
	ft_printf("pa\n");

}
 