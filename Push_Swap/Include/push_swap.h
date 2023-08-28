/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:36:09 by gforns-s          #+#    #+#             */
/*   Updated: 2023/08/28 08:10:42 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <limits.h>

typedef struct s_stack
{
	int				content;
	struct s_stack	*next;
}	t_stack;

typedef struct s_node
{
	int				content;
	struct s_node	*next;
	struct s_node	*prev;
	struct s_node	*first;
	struct s_node	*last;
}	t_node;


char	**ft_check_args(int argc, char **argv);
int		count_nodes(t_stack *stack);
t_stack	*swap_a(t_stack *a);
void	swap_ss(t_stack *a, t_stack *b);
void	general_push(t_stack *stack1, t_stack *stack2);
t_stack	*fill_stack(char **matrix);
void	print_nodes(t_stack *stack);



#endif