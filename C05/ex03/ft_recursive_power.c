/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdajani <hdajani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:47:54 by hdajani           #+#    #+#             */
/*   Updated: 2022/08/16 12:58:34 by hdajani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power);

int ft_recursive_power(int nb, int power)
{
	if(power<0) return(0);
	else if(power<0) return(1);
	else if(power==0) return(1);
	else if(power>0) return (nb*ft_recursive_power(nb,power-1));
}
