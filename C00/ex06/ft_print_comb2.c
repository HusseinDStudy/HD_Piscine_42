/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdajani <hdajani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 11:05:55 by hdajani           #+#    #+#             */
/*   Updated: 2022/08/11 16:21:14 by hdajani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	ft_putchar(int a, int b)
{
	char	ac;
	char	acd;
	char	bc;
	char	bcd;

	ac = (a % 10) + '0';
	acd = (a / 10) + '0';
	bc = (b % 10) + '0';
	bcd = (b / 10) + '0';
	write(1, &acd, 1);
	write(1, &ac, 1);
	write(1, " ", 1);
	write(1, &bcd, 1);
	write(1, &bc, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		while (b <= 99)
		{
			ft_putchar(a, b);
			if (a != 98 || b != 99)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
		b = a + 1;
	}
}
