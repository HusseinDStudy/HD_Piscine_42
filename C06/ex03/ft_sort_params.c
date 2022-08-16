/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdajani <hdajani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:31:46 by hdajani           #+#    #+#             */
/*   Updated: 2022/08/16 14:31:38 by hdajani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//use putstr & strcmp si strcmp i i+1 >0 swap else  rien
#include <unistd.h>
//ft_putstr
//ft_strcmp
void	ft_print_params(char **args)
{
	int i;
	int j;

	i = 1;
	j = 1;
	while(args[i])
		{
			ft_putstr(args[i]);
			write(1, '\n', 1);
			i++;
		}
		write(1, '\n', 1);
}

void	ft_sort_params(char **args)
{
	int i;
	int j;
	char *temp;

	i = 1;
	j = 1;
	while(args[i])
	{
		while(args[j])
		{
			if(ft_strcmp(args[i],args[j]) > 0)
			{
				temp=args[j];
				args[j]=args[i];
				args[i]=temp;
			}
			j++;
		}
		i++;
	}
	ft_print_params(**args);
}

int main(int argv, char **args)
{
	if(argv>=1)
	{
		ft_sort_params(**args);
	}
}
