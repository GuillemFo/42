/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:59:37 by gforns-s          #+#    #+#             */
/*   Updated: 2023/04/19 20:09:44 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int argc, char *argc[])
{
	int i;
	int index;

	i = 0;
	if (argc != 2)
		write(1, "\n", 1);
	while (argv[1][i])
	{
		

