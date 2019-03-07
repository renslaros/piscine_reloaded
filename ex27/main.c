/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rlaros <rlaros@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/15 05:06:06 by rlaros         #+#    #+#                */
/*   Updated: 2019/01/15 15:02:04 by rlaros        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int		main(int argc, char **argv)
{
	if (argc < 2)
		ft_putstr("File name missing.\n");
	if (argc > 2)
		ft_putstr("Too many arguments.\n");
	if (argc == 2)
		ft_display_file(argv[1]);
	return (0);
}
