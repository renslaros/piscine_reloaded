/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rlaros <rlaros@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/14 05:17:27 by rlaros         #+#    #+#                */
/*   Updated: 2019/01/14 09:41:22 by rlaros        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if ((nb < 0) || (nb > 12))
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	while (nb != 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}
