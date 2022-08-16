/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdajani <hdajani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:18:22 by hdajani           #+#    #+#             */
/*   Updated: 2022/08/09 12:45:19 by hdajani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int	compteur;

	compteur = 0;
	while (str[compteur])
	{
		if (str[compteur] < 97 || str[compteur] > 122)
		{
			return (0);
		}
		compteur++;
	}
	return (1);
}
