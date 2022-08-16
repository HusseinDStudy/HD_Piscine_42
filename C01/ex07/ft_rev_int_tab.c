/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdajani <hdajani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 13:33:29 by hdajani           #+#    #+#             */
/*   Updated: 2022/08/08 15:31:21 by hdajani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int	*tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	compteur;
	int	stock;

	compteur = 0;
	while (compteur < size)
	{
		stock = tab[size - 1];
		tab[size - 1] = tab[compteur];
		tab[compteur] = stock;
		compteur++;
		size--;
	}
}
