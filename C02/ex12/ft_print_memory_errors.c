/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory_errors.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdajani <hdajani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 18:13:37 by hdajani           #+#    #+#             */
/*   Updated: 2022/08/24 09:14:08 by hdajani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	*ft_print_memory(void *addr, unsigned int size);

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}
int	ft_len(char *str,int n,int type)
{
	int	counter;

	counter = 0;
	if(type)
	{
		while (str[counter] != '\0') counter++;
		return (counter);
	}
	else
	{
		if (n >= 1000000000)
			return (10);
		if (n >= 100000000)
			return (9);
		if (n >= 10000000)
			return (8);
		if (n >= 1000000)
			return (7);
		if (n >= 100000)
			return (6);
		if (n >= 10000)
			return (5);
		if (n >= 1000)
			return (4);
		if (n >= 100)
			return (3);
		if (n >= 10)
			return (2);
		return (1);
	}
	return (0);
}
int	intlen(int n)
{
	if (n >= 1000000000)
		return (10);
	if (n >= 100000000)
		return (9);
	if (n >= 10000000)
		return (8);
	if (n >= 1000000)
		return (7);
	if (n >= 100000)
		return (6);
	if (n >= 10000)
		return (5);
	if (n >= 1000)
		return (4);
	if (n >= 100)
		return (3);
	if (n >= 10)
		return (2);
	return (1);
}

void	ft_putstr_non_printable(char str)
{
	unsigned char	temp;
	char			*hexa;

	hexa = "0123456789abcdef";
	temp = str;
	write (1, &hexa[(0 + temp) / 16], 1);
	write (1, &hexa[(0 + temp) % 16], 1);
}

char	*convert_hexa(int nb)
{
	char	*dest;
	int		i;
	char	unit;

	//i = -1;
	dest = "0000000000000000";
	/*while (i++ && i < 16)
		dest[i] = '0';
	dest[16] = '\0';*/
	i = 0;
	while (i < 16)
	{
		unit = nb % 16;
		if (unit > 9)
			unit += 'a' - 10;
		else
			unit += '0';
		dest[16 - i -1] = unit;
		nb /= 16;
		i++;
	}
	dest[16] = '\0';
	i = 0;
	while (dest[i])
	{
		write(1, &dest[i], 1);
		i++;
	}
	write (1, "\t", 1);
	return (dest);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	int				firstaddr;
	char			*addr_string;
	int				counter;

	if (size > 0)
	{
		firstaddr = (int) &addr[0];
		addr_string = (char *)addr;
		i = 0;
		convert_hexa(firstaddr);
		while (i < size - 1 && i < 16)
		{
			ft_putstr_non_printable (addr_string[i]);
			ft_putstr_non_printable (addr_string[i + 1]);
			if (i != size - 2)
				write(1, " ", 1);
			i += 2;
		}
		while (i >= size - 1 && i < 16)
		{
			write(1, "   ", 2);
			if (i != size - 2)
				write(1, " ", 1);
			i++;
		}
		write(1, "\t", 1);
		counter = 0;
		while (addr_string[counter] != '\0' && counter < 16)
		{
			write(1, &addr_string[counter], 1);
			counter++;
		}
		write(1, "\n", 1);
	}
	if (size > 16)
	{
		addr += 16;
		ft_print_memory(addr, ft_strlen(addr));
	}
	return (addr);
}

int	main(void)
{
	char	*chaine = "xxxxxxxxxxxxxxx0xxxxxxxxxxxxxxx0xxxxxxxxxxxxxxx0xxxxxxxxx";
	ft_print_memory(chaine,ft_strlen(chaine));
}
