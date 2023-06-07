/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:30:06 by gforns-s          #+#    #+#             */
/*   Updated: 2023/06/06 17:30:38 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;
	t_list	*pepe;

	pepe = ft_lstnew(lst->content);
	new = pepe;
	tmp = lst;
	while (lst->next)
	{
		lst = lst->next;
		new->next = ft_lstnew(lst->content);
		new = new->next;
	}
	new = pepe;
	lst = tmp;
	while (lst)
	{
		new = ft_lstiter(new, (void *)*(f));
		if (!new)
			return (NULL);
		ft_lstdelone(lst, del);
		lst = lst->next;
		new = new->next;
	}
	return (new);
}

