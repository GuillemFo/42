/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printsring.cc                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:15:27 by gforns-s          #+#    #+#             */
/*   Updated: 2023/06/14 13:54:23 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_string(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		if (write (1, &s[i], 1) == -1)
			return (-1);
	return (i);
}

int	ft_char(int s)
{
	if (write(1, &s, 1) == -1)
		return (-1);
	return (1);
}
