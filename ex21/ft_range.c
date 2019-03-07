/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_range.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rlaros <rlaros@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/11 21:36:43 by rlaros         #+#    #+#                */
/*   Updated: 2019/01/15 06:01:32 by rlaros        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *arr;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	arr = (int*)malloc(sizeof(*arr) * (max - min) + 1);
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
