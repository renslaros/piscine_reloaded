/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_point.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rlaros <rlaros@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/14 12:38:35 by rlaros         #+#    #+#                */
/*   Updated: 2019/01/15 03:39:52 by rlaros        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H
# define FT_POINT_H

typedef	struct	s_point
{
	int x;
	int y;
}				t_point;

void			set_point(t_point *point);

#endif
