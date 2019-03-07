/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_count_if.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rlaros <rlaros@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/14 15:33:32 by rlaros         #+#    #+#                */
/*   Updated: 2019/01/15 06:03:51 by rlaros        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f) (char*))
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}
