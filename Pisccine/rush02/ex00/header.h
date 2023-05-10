/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psastre <psastre@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 12:00:22 by psastre           #+#    #+#             */
/*   Updated: 2023/04/16 20:31:42 by istorric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH
# define FT_RUSH
#include<unistd.h>
	#include<stdlib.h>
	#include<fcntl.h>

	#include<stdio.h>

typedef struct t_listd {
	int		n;
	char	*word;

}				l_dict;
int	ft_put_error(int i);
int	checklenfile(int file);
int	check_arg(int a, char **str, char *sdata);
int	ft_strlen_n(char *str);
int	num_of_row(char *dfile);
l_dict	*parsedata(char *dfile, int row);
#endif
