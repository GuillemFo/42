/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:36:09 by gforns-s          #+#    #+#             */
/*   Updated: 2023/08/28 15:49:03 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <limits.h>

typedef struct s_stack
{
	int				content;
	//int				index;
	struct s_stack	*next;
}	t_stack;


char	**ft_check_args(int argc, char **argv);
int		count_nodes(t_stack *stack);
t_stack	*swap_a(t_stack *a);
t_stack	*swap_b(t_stack *b);
void	swap_ss(t_stack *a, t_stack *b);
void	push_a(t_stack **b, t_stack **a);
void	push_b(t_stack **b, t_stack **a);
t_stack	*rotate_a(t_stack *a);
t_stack	*rotate_b(t_stack *b);
void	rotate_rotate(t_stack **a, t_stack **b);
t_stack	*fill_stack(char **matrix);
void	print_nodes(t_stack *stack);



#endif