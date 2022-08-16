/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdajani <hdajani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:35:30 by hdajani           #+#    #+#             */
/*   Updated: 2022/08/09 12:49:44 by hdajani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int	compteur;

	compteur = 0;
	while (str[compteur])
	{
		if (str[compteur] >= 'a' && str[compteur] <= 'z')
		{
			str[compteur] = str[compteur] - 32;
		}
		compteur++;
	}
	return (str);
}
