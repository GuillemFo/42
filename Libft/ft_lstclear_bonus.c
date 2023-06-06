/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 13:53:30 by gforns-s          #+#    #+#             */
/*   Updated: 2023/06/06 13:59:36 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{	
	t_list	tmp;

	tmp =
	if (*lst)
	{
		while (*lst != NULL)
		{
			(del)(*lst->content);
			*lst = *lst->next;
		}
		free(*lst);
	}
}
