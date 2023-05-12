/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 13:03:09 by gforns-s          #+#    #+#             */
/*   Updated: 2023/05/12 16:31:55 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *var)
{
	size_t	count;

	count = 0;
	while (var[count] != '\0')
		count++;
	return (count);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dst[20]	= "asdfghjklzxc";
	char	src[5]	= "hola";
	size_t	dstsize = 20;

	printf("%lu\n", strlcat(dst, src, dstsize));
	printf("%s\n", dst);
	printf("%lu\n", ft_strlcat(dst, src, dstsize));
	printf("%s\n", dst);
}
