/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:12:08 by gforns-s          #+#    #+#             */
/*   Updated: 2023/05/09 12:46:26 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;

	i = 0;
	if (dst == src || len == 0)
		return (dst);
	if (src < dst)
	{
		while (len > 0)
		{
			*((char *)dst + len - 1) = *((char *)src + len - 1);
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			*((char *)dst + i) = *((char *)src + i);
			i++;
		}
	}
	return (dst);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	unsigned char	src[] = "hola";
	unsigned char	dst[] = "tarde";
	size_t			len = 3;

	printf("%s\n", ft_memmove(src +2, src, len));
}
*/