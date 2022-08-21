/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdajani <hdajani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:30:20 by hdajani           #+#    #+#             */
/*   Updated: 2022/08/18 12:52:04 by hdajani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	main(int argv, char **args)
{
	int	i;

	i = argv - 1;
	while (i != 0)
	{
		ft_putstr(args[i]);
		write(1, "\n", 1);
		i--;
	}
}
