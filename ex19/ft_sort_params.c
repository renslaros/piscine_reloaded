/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_params.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: rlaros <rlaros@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/12 00:25:06 by rlaros         #+#    #+#                */
/*   Updated: 2019/01/15 05:00:58 by rlaros        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_params(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) >= 0)
			{
				temp = argv[j];
				argv[j] = argv[i];
				argv[i] = temp;
			}
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int	i;

	i = 1;
	ft_sort_params(argc, argv);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
