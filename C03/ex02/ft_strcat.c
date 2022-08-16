/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdajani <hdajani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:24:55 by hdajani           #+#    #+#             */
/*   Updated: 2022/08/14 10:28:43 by hdajani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int	count_src;
	int	count_dest;

	count_src = 0;
	count_dest = 0;
	while (dest[count_dest])
	{
		count_dest++;
	}
	while (src[count_src])
	{
		dest[count_dest] = src[count_src];
		count_src++;
		count_dest++;
	}
	dest[count_dest] = '\0';
	return (dest);
}
