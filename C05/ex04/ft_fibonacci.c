/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdajani <hdajani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:59:12 by hdajani           #+#    #+#             */
/*   Updated: 2022/08/16 15:20:06 by hdajani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index);

int ft_fibonacci(int index)
{
 if(index >= 2) index = ft_fibonacci (index - 1) + ft_fibonacci (index - 2);
	else if(index == 1) return (1);
 else if(index == 0) return (0);
 else if(index < 0) return (-1);
}
