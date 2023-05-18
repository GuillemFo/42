/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:51:32 by gforns-s          #+#    #+#             */
/*   Updated: 2023/05/18 14:41:22 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	substr = malloc(len + 1 * sizeof(char));
	if (!substr)
		return (0);
	while (s[start] != '\0' && i < len)
	{
		substr[i] = s[start];
		start++;
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
/*
#include <stdio.h>

int	main(void)
{
	char	s[20] = "hola buenas tardes";
	int		start = 5;
	size_t	len = 7;

	printf("%s\n", ft_substr(s, start, len));
}
*/