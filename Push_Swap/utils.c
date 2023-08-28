/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:00:35 by gforns-s          #+#    #+#             */
/*   Updated: 2023/08/28 10:19:07 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//CAMBIAR TODO A NODES

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

//FILEAR X NODOS, CREAR UN NODO X CADA VALOR.
//LINKEAR CADA NODO A PREV y NEXT
//SI ES EL PRIMERO QUE SE GUARDE COMO FIRST Y SI ES EL ULTIMO QUE SE GUARDE COMO LAST

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

t_node *fill_nodes(char **matrix)
{
	int		i;
	t_node	*node;
	t_node	*first;
	t_node	*last;

	i = 0;
	node = malloc (sizeof(t_node));
	first = malloc (sizeof(t_node));
	last = malloc (sizeof(t_node));
	while (matrix[i])
	{
		node->content = ft_atoi(matrix[i]);
		if (matrix[0])
			first = node;
		node->next = malloc (sizeof(t_node));
		else if (matrix[i + 1] == NULL)
		{
			last = node;
			node->next = NULL;
		}
		else
			node = node->next;
		i++;
	}
	return (first);
}
