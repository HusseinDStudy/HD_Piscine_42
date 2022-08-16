/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 11:04:05 by hdajani           #+#    #+#             */
/*   Updated: 2022/08/15 09:42:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str);

int	ft_char_is_whitespace(char str)
{
	if (str != ' ' && str != '\t' && str != '\r' && str != '\n'	&& str != '\v' && str != '\f') return (0);
	else return (1);
}

int	ft_char_is_numeric(char str)
{
	if (str < 48 || str > 57) return (0);
	else return (1);
}


int ft_atoi(char *str)
{
	int	counter;
	int	nbminus;
	int output;

	counter = 0;
	nbminus = 0;
	while(ft_char_is_whitespace(str[counter])) counter++;

	while(str[counter]=='-' || str[counter]=='+')
	{
		if(str[counter]=='-') nbminus++;
		counter++;
	}
	while(ft_char_is_numeric(str[counter]) == 0) counter++;
	while(ft_char_is_numeric(str[counter])) output*=10+str[counter]-'0';
	if(nbminus%2==0) return(output);
	else return(-output);
}