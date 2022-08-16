/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 19:34:47 by hdajani           #+#    #+#             */
/*   Updated: 2022/08/15 21:15:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	count_src;
	unsigned int	count_dest;

	count_src = 0;
	count_dest = 0;
	while (dest[count_dest])
	{
		count_dest++;
	}
	while (count_src < size && src[count_src] != '\0')
	{
		dest[count_dest] = src[count_src];
		count_src++;
		count_dest++;
	}
	dest[count_dest] = '\0';
	return (count_dest);
}
