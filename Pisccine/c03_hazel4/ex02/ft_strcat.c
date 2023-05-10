/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:47:48 by gforns-s          #+#    #+#             */
/*   Updated: 2023/04/18 14:30:36 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	n;
	int	j;

	n = 0;
	j = 0;
	while (dest[n] != '\0')
		n++;
	while (src[j] != '\0')
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

#include <stdio.h>
#include <string.h>

int main () 
{
	char src[] = "buenos dias";
	char dest[] = "Deberia funcionar";
	ft_strcat(dest, src);

   strcpy(src,  "This is source");
   strcpy(dest, "This is destination");

   strcat(dest, src);

   printf("Final destination string : |%s|", dest);
   
   return(0);
}*/
