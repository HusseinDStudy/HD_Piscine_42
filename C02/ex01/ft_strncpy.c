/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdajani <hdajani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:17:34 by hdajani           #+#    #+#             */
/*   Updated: 2022/08/13 15:03:14 by hdajani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	compteur;

	compteur = 0;
	while (compteur < n && src[compteur] != '\0')
	{
		dest[compteur] = src[compteur];
		compteur++;
	}
	while (compteur < n)
	{
		dest[compteur] = '\0';
		compteur++;
	}
	return (dest);
}
