/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_foreach.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rlaros <rlaros@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/14 15:10:30 by rlaros         #+#    #+#                */
/*   Updated: 2019/01/14 15:33:07 by rlaros        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f) (int))
{
	int i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
