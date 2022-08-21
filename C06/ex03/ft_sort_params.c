/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdajani <hdajani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:31:46 by hdajani           #+#    #+#             */
/*   Updated: 2022/08/21 17:55:23 by hdajani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//use putstr & strcmp si strcmp i i+1 >0 swap else  rien
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	counter;

	counter = 0;
	while (s2[counter] != '\0' && s1[counter] && s1[counter] == s2[counter])
		counter++;
	return (s1[counter] - s2[counter]);
}

void	ft_print_params(char **args)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (args[i])
	{
		ft_putstr(args[i]);
		write(1, "\n", 1);
		i++;
	}
}

void	ft_sort_params(char **args)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (args[i])
	{
		j = 1;
		while (args[j])
		{
			if (ft_strcmp(args[i], args[j]) < 0)
			{
				temp = args[j];
				args[j] = args[i];
				args[i] = temp;
				j = 0;
			}
			j++;
		}
		i++;
	}
	ft_print_params(args);
}

int	main(int argv, char **args)
{
	if (argv >= 2)
	{
		ft_sort_params(args);
	}
}
