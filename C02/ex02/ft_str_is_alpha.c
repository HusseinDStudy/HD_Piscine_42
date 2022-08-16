/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdajani <hdajani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:07:25 by hdajani           #+#    #+#             */
/*   Updated: 2022/08/09 12:40:54 by hdajani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	compteur;

	compteur = 0;
	while (str[compteur])
	{
		if (str[compteur] < 65 || str[compteur] > 122)
		{
			return (0);
		}
		if (str[compteur] > 90 && str[compteur] < 97)
		{
			return (0);
		}
	compteur++;
	}
	return (1);
}
