/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdajani <hdajani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 14:03:59 by hdajani           #+#    #+#             */
/*   Updated: 2022/08/15 14:17:34 by hdajani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count_src;
	unsigned int	count_dest;

	count_src = 0;
	count_dest = 0;
	while (dest[count_dest])
	{
		count_dest++;
	}
	while (count_src < nb && src[count_src] != '\0')
	{
		dest[count_dest] = src[count_src];
		count_src++;
		count_dest++;
	}
	dest[count_dest] = '\0';
	return (dest);
}
