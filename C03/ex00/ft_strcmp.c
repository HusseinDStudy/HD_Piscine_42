/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdajani <hdajani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:19:02 by hdajani           #+#    #+#             */
/*   Updated: 2022/08/14 13:07:10 by hdajani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	counter;

	counter = 0;
	while (s2[counter] != '\0' && s1[counter] && s1[counter] == s2[counter])
		counter++;
	return (s1[counter] - s2[counter]);
}
