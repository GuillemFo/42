/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 14:13:22 by gforns-s          #+#    #+#             */
/*   Updated: 2023/04/18 12:49:25 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	n;

	n = 0;
	while (s1[n] != '\0' && s2[n] != '\0' && s1[n] == s2[n])
	{
		n++;
	}
	return (s1[n] - s2[n]);
}
/*
#include <stdio.h>
#include <string.h>
int main(void) 
{
    char str1[] = "Hel";
    char str2[] = "Hello";
    char str3[] = "World";
    
  printf("Testing ft_strcmp...\n");
  printf("Comparing \"%s\" and \"%s\": %d\n", str1, str2, ft_strcmp(str1, str2));
  printf("Comparing \"%s\" and \"%s\": %d\n", str1, str3, ft_strcmp(str1, str3));
  printf("Comparing \"%s\" and \"%s\": %d\n", str3, str1, ft_strcmp(str3, str1));
    
    return 0;
}*/
