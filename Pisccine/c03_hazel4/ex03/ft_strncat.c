/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 14:49:36 by gforns-s          #+#    #+#             */
/*   Updated: 2023/04/18 17:32:15 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	n;
	unsigned int	j;

	n = 0;
	j = 0;
	while (dest[n] != '\0')
		n++;
	while (src[j] != '\0' && j < nb)
	{
		dest[n] = src[j];
		n++;
		j++;
	}
	dest[n] = '\0';
	return (dest);
}
/*
pegar el src despues del dest y anadir null al final :)
*//*
#include <stdio.h>
#include <string.h>

int main ()
{
	char src[50] = "buenos dias";
	char dest[100] = "Deberia funcionar";
	unsigned int nb;

	nb = 4;
	ft_strncat(dest, src, nb);

  // strcpy(src,  "This is source");
  // strcpy(dest, "This is destination");
	
//	strncat(dest, src, nb);

   printf("Final destination string : |%s|", dest);

   return(0);
}*/
