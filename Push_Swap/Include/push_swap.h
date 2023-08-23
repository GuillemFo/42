/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:36:09 by gforns-s          #+#    #+#             */
/*   Updated: 2023/08/23 17:18:59 by gforns-s         ###   ########.fr       */
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

char	**ft_check_args(int argc, char **argv);
int		count_nodes(t_stack *stack);
t_stack	*swap_a(t_stack *a);
void	swap_ss(t_stack *a, t_stack *b);


#endif