/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdajani <hdajani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:22:46 by hdajani           #+#    #+#             */
/*   Updated: 2022/08/09 12:47:03 by hdajani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int	compteur;

	compteur = 0;
	while (str[compteur])
	{
		if (str[compteur] < 65 || str[compteur] > 90)
		{
			return (0);
		}
		compteur++;
	}
	return (1);
}
