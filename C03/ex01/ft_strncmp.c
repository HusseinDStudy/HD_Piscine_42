/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdajani <hdajani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:22:07 by hdajani           #+#    #+#             */
/*   Updated: 2022/08/15 16:09:42 by hdajani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	if (n == 0)
		return (0);
	while (s1[counter] && s2[counter] && counter < n - 1 \
			&& s1[counter] == s2[counter])
	{
		counter++;
	}
	return (s1[counter] - s2[counter]);
}
