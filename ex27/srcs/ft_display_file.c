/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_display_file.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rlaros <rlaros@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/15 05:06:20 by rlaros         #+#    #+#                */
/*   Updated: 2019/01/15 05:47:54 by rlaros        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "../includes/libft.h"

void	ft_display_file(char *argv)
{
	int		fd;
	char	*buf;

	fd = open(argv, O_RDONLY);
	while (read(fd, &buf, 1) != 0)
		write(1, &buf, 1);
	close(fd);
}
