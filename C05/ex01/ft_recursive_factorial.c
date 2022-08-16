/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdajani <hdajani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 10:25:44 by hdajani           #+#    #+#             */
/*   Updated: 2022/08/16 11:57:07 by hdajani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb);

int ft_recursive_factorial(int nb)
{
	if(nb >=2)
	{
		nb = nb * ft_recursive_factorial (nb-1);
	}
	if(nb == 1) return (nb);
	if(nb == 0) return (1);
	if(nb < 0) return (0);
}
