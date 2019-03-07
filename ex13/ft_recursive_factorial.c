/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rlaros <rlaros@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/14 05:15:33 by rlaros         #+#    #+#                */
/*   Updated: 2019/01/15 03:15:19 by rlaros        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if ((nb < 0) || (nb > 12))
		return (0);
	if (nb == 1 || nb == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial((nb - 1)));
}
