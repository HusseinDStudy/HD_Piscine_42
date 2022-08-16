/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdajani <hdajani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 12:39:12 by hdajani           #+#    #+#             */
/*   Updated: 2022/08/09 12:51:15 by hdajani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	compteur;

	compteur = 0;
	while (str[compteur])
	{
		if (str[compteur] >= 'A' && str[compteur] <= 'Z')
		{
			str[compteur] = str[compteur] + 32 ;
		}	
		compteur++;
	}
	return (str);
}
