/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdajani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 13:19:12 by hdajani           #+#    #+#             */
/*   Updated: 2022/08/07 13:34:48 by hdajani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	first(int largeur)
{
	int	i;

	i = 0;
	if (largeur == 1)
	{
		write (1, "A\n", 2);
	}
	if (largeur > 1)
	{
		write (1, "A", 1);
		while (i < largeur - 2 && largeur > 2)
		{
			write (1, "B", 1);
			i++;
		}
		write (1, "C\n", 2);
	}
}

void	end(int largeur)
{
	int	i;

	i = 0;
	if (largeur == 1)
	{
		write (1, "C\n", 2);
	}
	if (largeur > 1)
	{
		write (1, "C", 1);
		while (i < largeur - 2 && largeur > 2)
		{
			write (1, "B", 1);
			i++;
		}
		write (1, "A\n", 2);
	}
}

void	middle_line(int largeur)
{
	int	j;

	j = 0;
	if (largeur == 1)
	{
		write (1, "B\n", 2);
	}
	if (largeur == 2)
	{
		write (1, "BB\n", 3);
	}
	if (largeur > 2)
	{
		write (1, "B", 1);
		while (j < (largeur - 2))
		{
			write (1, " ", 1);
			j++;
		}
		write (1, "B\n", 2);
	}
}

void	rush(int largeur, int longeur)
{
	int	i;

	i = 0;
	if (longeur > 0)
	{
		first (largeur);
	}
	if (longeur > 1)
	{
		while (i < (longeur - 2))
		{
			middle_line (largeur);
			i++;
		}
		end (largeur);
	}
}

int	main(void)
{
	rush (5, 3);
	rush (5, 1);
	rush (1, 1);
	rush (1, 5);
	rush (4, 4);
}
