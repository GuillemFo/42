/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_and_replace.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gforns-s <gforns-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 21:22:35 by gforns-s          #+#    #+#             */
/*   Updated: 2023/04/19 21:22:48 by gforns-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv) {
	int i;

	// we only need three parameters
	if (argc != 4) {
		write(1, "\n", 1);
		return 0;
	}

	// the second and third arguments must be letters
	if (argv[2][1] != '\0' || argv[3][1] != '\0') {
		write(1, "\n", 1);
		return 0;
	}

	// find and replace
	i = 0;
	while (argv[1][i] != '\0') {
		if (argv[1][i] == argv[2][0])
			argv[1][i] = argv[3][0];
		write(1, &argv[1][i], 1);
		i++;
	}

	write(1, "\n", 1);
	return 0;
}
