/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdajani <hdajani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 12:41:18 by hdajani           #+#    #+#             */
/*   Updated: 2022/08/13 16:05:20 by hdajani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);

int	ft_char_alphanum(char str)
{
	if (str < 48 || (str > 57 && str < 65) || str > 122)
	{
		return (0);
	}
	if (str > 90 && str < 97)
	{
		return (0);
	}
	return (1);
}

char	ft_charupcase(char str)
{
	if (str >= 'a' && str <= 'z')
	{
		str = str - 32;
	}
	return (str);
}

char	ft_charlowcase(char str)
{
	if (str >= 'A' && str <= 'Z')
	{
		str = str + 32 ;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		if (ft_char_alphanum(str[c]) == 1 && ft_char_alphanum(str[c - 1]) == 0)
		{
				str[c] = ft_charupcase (str[c]);
		}
		else
		{
			str[c] = ft_charlowcase (str[c]);
		}
		c++;
	}
	return (str);
}
