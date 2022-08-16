/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdajani <hdajani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 13:34:02 by hdajani           #+#    #+#             */
/*   Updated: 2022/08/08 15:35:45 by hdajani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	stock;

	i = 0;
	while (i < size)
	{
		j = i;
		while (j > 0 && tab[j - 1] > tab[j])
		{
			stock = tab[j];
			tab[j] = tab[j - 1];
			tab[j - 1] = stock;
			j--;
		}
		i++;
	}
}
