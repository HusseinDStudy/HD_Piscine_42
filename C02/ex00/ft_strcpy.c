/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdajani <hdajani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:10:04 by hdajani           #+#    #+#             */
/*   Updated: 2022/08/09 12:27:14 by hdajani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	int	compteur;

	compteur = 0;
	while (src[compteur])
	{
		dest[compteur] = src[compteur];
		compteur++;
	}
	dest[compteur] = '\0';
	return (dest);
}
