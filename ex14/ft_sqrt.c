/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rlaros <rlaros@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/14 05:13:09 by rlaros         #+#    #+#                */
/*   Updated: 2019/01/14 05:14:53 by rlaros        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	i = 2;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (nb > i * i)
		i++;
	if (nb == i * i)
	{
		return (i);
	}
	else
	{
		return (0);
	}
}
