/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdajani <hdajani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:16:20 by hdajani           #+#    #+#             */
/*   Updated: 2022/08/16 12:27:14 by hdajani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argv, char **args)
{
	int i;

	i = 0;
	if(argv==1)
	{
		while(args[0][i])
		{
			write(1, &args[0][i], 1);
			i++;
		}
		write(1, '\n', 1);
	}
}