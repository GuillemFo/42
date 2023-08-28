/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:34:33 by gforns-s          #+#    #+#             */
/*   Updated: 2023/08/28 08:12:51 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*missing filter for repeated values*/

// void	print_nodes(t_stack *stack)
// {
// 	while (stack)
// 	{
// 		ft_printf("%d\n", stack->content);
// 		stack = stack->next;
// 	}
// }

// t_stack	*fill_stack(char **matrix)
// {
// 	int		i;
// 	t_stack	*stack;
// 	t_stack	*stack2;

// 	i = 0;
// 	stack = malloc (sizeof(t_stack));
// 	stack2 = stack;
// 	while (matrix[i])
// 	{
// 		stack->content = ft_atoi(matrix[i]);
// 		if (matrix[i + 1] == NULL)
// 			stack->next = NULL;
// 		else
// 		{
// 			stack->next = malloc (sizeof(t_stack));
// 			stack = stack->next;
// 		}
// 		i++;
// 	}
// 	return (stack2);
// }

//CAMBIAR STRUCT POR NODES


int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	**matrix;

	a = NULL;
	b = NULL;

	b = malloc(sizeof (t_stack));
	if (argc < 2) 
		return (write(2, "ERROR\n", 6));
	else
	{
		matrix = ft_check_args(argc, argv);
		a = fill_stack(matrix);
		ft_printf("---Print A---\n");
		print_nodes(a);
		ft_printf("---Print B----\n");
		print_nodes(b);
		/*next 2 lines are test*/
		ft_printf("--PA--\n");
		general_push(&*a, &*b);
		ft_printf("----A----\n");
		print_nodes(a);
		ft_printf("----B-----\n");
		print_nodes(b);
		ft_printf("\n");
		ft_printf("\n");
	}
	return (0);
}
