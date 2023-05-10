/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:58:42 by gforns-s          #+#    #+#             */
/*   Updated: 2023/04/20 12:38:58 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
int main(int argc, char *argv[])
{
	if (argc != 2)
		printf("Error,Argument must be 2 only");
	else
	printf("the lenght of the input is: %d\n", ft_strlen(argv[1]));
	
}*/	
