/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdajani <hdajani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:27:27 by hdajani           #+#    #+#             */
/*   Updated: 2022/08/16 12:29:57 by hdajani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>



int main(int argv, char **args)
{
	int i;

	i = 1;
	if(argv>=1)
	{
		while(args[i])
		{
			ft_putstr(args[i]);
			write(1, '\n', 1);
			i++;
		}
		write(1, '\n', 1);
	}
}