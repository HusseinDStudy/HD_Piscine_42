/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdajani <hdajani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 14:52:39 by hdajani           #+#    #+#             */
/*   Updated: 2022/08/08 19:59:18 by hdajani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_putnbr(int nb)
{
	char	num_char;

	if (nb == -2147483647)
	{
		write(1, "-2147483647", 11);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(nb * (-1));
	}
	else if (nb > 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		num_char = nb + '0';
		write(1, &num_char, 1);
	}
}

void	print_final_number(int x, int niveau)
{
	int compteur =niveau;
	while(compteur < 9)
	{
		ft_putnbr(x);
		compteur++;
		//write(1, ", ", 1);
	}
}
void	ft_print_comb(int level, int range){
	int	a = 0;
	while (a <= range)
	{
		ft_print_comb(level,range);
		range--;
		a++;
	}
	print_final_number(a, level);
}

void	ft_print_combn(int n)
{
	int	a=0;
	while (a <= n)
	{
		ft_print_comb(a, n);
		a++;
	}
}