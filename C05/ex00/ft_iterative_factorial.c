/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdajani <hdajani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 10:18:21 by hdajani           #+#    #+#             */
/*   Updated: 2022/08/16 11:57:02 by hdajani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb);

int ft_iterative_factorial(int nb)
{
	int resultat;
	int i;

	i = 1;
	resultat = 1;
	if(nb<0) return(0);
	if(nb==0) return(1);
	while(i <= nb)
	{
		resultat *= i;
		i++;
	}
	return (resultat);
}
