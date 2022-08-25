/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 10:09:55 by hdajani           #+#    #+#             */
/*   Updated: 2022/08/25 00:52:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	combination_finder(int data[], int start, int index, int r);

void	ft_putnbr(int nb)
{
	char	num_char;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(nb * (-1));
	}
	else if (nb >= 10)
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

void	ft_print_combn(int r)
{
	int	data[9];

	if (r > 0 && r < 10)
	{
		combination_finder(data, 0, 0, r);
	}
}

void	first_print_while(int i, int r, int data[])
{
	while (i < r)
	{
		ft_putnbr(data[i]);
		i++;
	}
	write(1, ", ", 2);
}

void	combination_finder(int data[], int start, int index, int r)
{
	int	arr[10];
	int	i;
	int	n;
	int	end;

	i = 0;
	while (i <= 9)
	{
		arr[i] = i;
		i++;
	}
	n = 10;
	end = n - 1;
	if (index == r)
	{
		i = 0;
		first_print_while(i, r, data);
		return ;
	}
	while (start <= end && end - start + 1 >= r - index)
	{
		data[index] = arr[start];
		combination_finder(data, start + 1, index + 1, r);
		start++;
	}
}
