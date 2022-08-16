/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdajani <hdajani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:02:47 by hdajani           #+#    #+#             */
/*   Updated: 2022/08/11 15:57:05 by hdajani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	ft_strlen(char *str)
{
	unsigned int	compteur;

	compteur = 0;
	while (str[compteur] != '\0')
	{
		compteur++;
	}
	return (compteur);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	compteur;
	unsigned int	unusedstrdest;

	compteur = 0;
	unusedstrdest = size - 1;
	if (size != 0)
	{
		while (src[compteur] != '\0' && unusedstrdest != 0)
		{
			dest[compteur] = src[compteur];
			unusedstrdest--;
			compteur++;
		}
		while (compteur <= size - 1)
		{
			dest[compteur] = '\0';
			compteur++;
		}
		if (unusedstrdest == 0)
		{
			dest[compteur] = '\0';
		}
	}
	return (ft_strlen(src));
}
