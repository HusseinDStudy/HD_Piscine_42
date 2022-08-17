/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdajani <hdajani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 18:24:18 by hdajani           #+#    #+#             */
/*   Updated: 2022/08/17 12:40:46 by hdajani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	counter;

	counter = 0;
	while (s2[counter] != '\0' && s1[counter] && s1[counter] == s2[counter])
		counter++;
	return (s1[counter] - s2[counter]);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	counter_str;
	int	counter_to_find;

	counter_str = 0;
	counter_to_find = 0;
	if (ft_strlen(to_find) == 0 || !ft_strcmp(str, to_find))
		return (str);
	while (str[counter_str])
	{
		if (counter_to_find == ft_strlen(to_find))
			return (str += counter_str - ft_strlen(to_find));
		if (to_find[counter_to_find] == str[counter_str])
			counter_to_find++;
		else
		{
			counter_str -= counter_to_find;
			counter_to_find = 0;
		}
		counter_str++;
	}
	return (0);
}
