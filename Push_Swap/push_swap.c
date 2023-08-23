/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:34:33 by gforns-s          #+#    #+#             */
/*   Updated: 2023/08/23 17:21:59 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*missing filter for repeated values*/

void	print_nodes(t_stack *stack)
{
	while (stack)
	{
		ft_printf("%d\n", stack->content);
		stack = stack->next;
	}
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



int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	**matrix;

	a = NULL;
	b = NULL;
	if (argc < 2) 
		return (write(2, "ERROR\n", 6));
	else
	{
		matrix = ft_check_args(argc, argv);
		a = fill_stack(matrix);
		print_nodes(a);
		ft_printf("\n");
		/*next 2 lines are test*/
		a = swap_a(a);
		print_nodes(a);
	}
	return (0);
}
