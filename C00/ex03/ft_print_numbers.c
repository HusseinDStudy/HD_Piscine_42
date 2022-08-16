/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdajani <hdajani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 10:46:25 by hdajani           #+#    #+#             */
/*   Updated: 2022/08/07 10:02:54 by hdajani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	char	first_num;
	char	last_num;

	first_num = '0';
	last_num = '9';
	while (first_num <= last_num)
	{
		write(1, &first_num, 1);
		first_num++;
	}
}
