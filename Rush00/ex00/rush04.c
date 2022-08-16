/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdajani <hdajani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 13:42:41 by hdajani           #+#    #+#             */
/*   Updated: 2022/08/07 14:12:35 by hdajani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y);

void	first(int x)
{
	int	i;

	i = 0;
	if (x == 1)
	{
		write (1, "A\n", 2);
	}
	if (x > 1)
	{
		ft_putchar('A');
		while (i < x - 2 && x > 2)
		{
			ft_putchar('B');
			i++;
		}
		write (1, "C\n", 2);
	}
}

void	end(int x)
{
	int	i;

	i = 0;
	if (x == 1)
	{
		write (1, "C\n", 2);
	}
	if (x > 1)
	{
		ft_putchar('C');
		while (i < x - 2 && x > 2)
		{
			ft_putchar('B');
			i++;
		}
		write (1, "A\n", 2);
	}
}

void	middle_line(int x)
{
	int	j;

	j = 0;
	if (x == 1)
	{
		write (1, "B\n", 2);
	}
	if (x == 2)
	{
		write (1, "BB\n", 3);
	}
	if (x > 2)
	{
		ft_putchar('B');
		while (j < (x - 2))
		{
			ft_putchar(' ');
			j++;
		}
		write (1, "B\n", 2);
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (y > 0)
	{
		first (x);
	}
	if (y > 1)
	{
		while (i < (y - 2))
		{
			middle_line (x);
			i++;
		}
		end (x);
	}
}
