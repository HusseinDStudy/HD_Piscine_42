/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdajani <hdajani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 08:45:17 by hdajani           #+#    #+#             */
/*   Updated: 2022/08/13 16:30:15 by hdajani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str);

int	ft_str_is_printable(char str)
{
	if (str < 32 || str == 127)
	{
		return (0);
	}
	return (1);
}

char	convert_hexa(int decimal_ascii)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	return (hexa[decimal_ascii]);
}

void	ft_putstr_non_printable(char *str)
{
	char	antislash;
	char	temp;
	int		compteur;

	antislash = 92;
	compteur = 0;
	while (str[compteur])
	{
		if (ft_str_is_printable(str[compteur]))
		{
			temp = str[compteur];
			write (1, &temp, 1);
		}
		else
		{
			write(1, &antislash, 1);
			temp = str[compteur];
			temp = convert_hexa((0 + temp) / 16);
			write (1, &temp, 1);
			temp = str[compteur];
			temp = convert_hexa((0 + temp) % 16);
			write (1, &temp, 1);
		}
		str++;
	}
}
