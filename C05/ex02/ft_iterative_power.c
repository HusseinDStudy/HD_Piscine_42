/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdajani <hdajani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 11:57:26 by hdajani           #+#    #+#             */
/*   Updated: 2022/08/16 12:51:39 by hdajani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power);

int ft_iterative_power(int nb, int power)
{
	int resultat;
	int i;

	i = 1;
	resultat = 1;
	if(power<0) return(0);
	else if(power<0) return(1);
	else if(power==0) return(1);
	else if(nb==0 ) return(0);//PEUT ETRE PRBLM
	while(i <= power)
	{
		resultat *= nb;
		i++;
	}
	return (resultat);
}
