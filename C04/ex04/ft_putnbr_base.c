/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 21:30:04 by marvin            #+#    #+#             */
/*   Updated: 2022/08/15 21:30:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr_base(int nbr, char *base);

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
int is_not_errored(char *data)
{
    int count;
    int count_inner;
    int count_repetition;

    count = 0;
    count_inner = 0;
    count_repetition = -1;
    if (ft_strlen(base) < 1) return (0);
    while (data[count])
    {
        if (data[count] == '+' || data[count] == '-') return (0);
        count_repetition = -1;
        while(data[count_inner])
        {
            if(data[count] == data[count_inner]) count_repetition++;
            count_inner++;
        }
        if(count_repetition>0) return (0);
    }
    return (1);
}
void ft_putnbr_base(int nbr, char *base)
{
    if(is_not_errored(base))
    {
        
    }
}
• Écrire une fonction qui affiche un nombre dans le terminal dans une base donnée.
• Ce nombre est fourni sous la forme d’un int et la base sous la forme d’une chaîne
de caractères.
• La base contient tous les symboles utilisables pour afficher le nombre :
◦ 0123456789 est la base couramment utilisée pour représenter nos nombres
décimaux ;
◦ 01 est une base binaire ;
◦ 0123456789ABCDEF est une base hexadecimale ;
◦ poneyvif est une base octale.
• La fonction doit gérer les nombres négatifs.

