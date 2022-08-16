/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdajani <hdajani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:30:20 by hdajani           #+#    #+#             */
/*   Updated: 2022/08/16 12:31:31 by hdajani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>



int main(int argv, char **args)
{
	int i;

	i = argv-1;
	if(argv>=1)
	{
		while(args[i]!=0)
		{
			ft_putstr(args[i]);
			write(1, '\n', 1);
			i--;
		}
		write(1, '\n', 1);
	}
}