/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:00:35 by gforns-s          #+#    #+#             */
/*   Updated: 2023/08/25 09:00:33 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_nodes(t_stack *stack)
{
	while (stack)
	{
		ft_printf("%d\n", stack->content);
		stack = stack->next;
	}
}

int	count_nodes(t_stack *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}
t_stack	*fill_stack(char **matrix)
{
	int		i;
	t_stack	*stack;
	t_stack	*stack2;

	i = 0;
	stack = malloc (sizeof(t_stack));
	stack2 = stack;
	while (matrix[i])
	{
		stack->content = ft_atoi(matrix[i]);
		if (matrix[i + 1] == NULL)
			stack->next = NULL;
		else
		{
			stack->next = malloc (sizeof(t_stack));
			stack = stack->next;
		}
		i++;
	}
	return (stack2);
}

