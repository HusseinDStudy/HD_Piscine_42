/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 18:24:18 by hdajani           #+#    #+#             */
/*   Updated: 2022/08/15 21:40:28 by marvin           ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find)
{
	int	counter_str;
	int	counter_to_find;

	counter_str = 0;
	counter_to_find = 0;
	if (*to_find == 0 || *to_find == *str)
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
