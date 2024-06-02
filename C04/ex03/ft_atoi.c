/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:56:55 by okapshai          #+#    #+#             */
/*   Updated: 2024/02/19 18:05:42 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	return (c == ' ' || c == '\f' || c == '\v' || c == '\t'
		|| c == '\r' || c == '\n');
}

int	is_sign(char c)
{
	return (c == '-' || c == '+');
}

int	is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	i;
	int	negativ;
	int	number;

	i = 0;
	negativ = 1;
	number = 0;
	while (is_space(str[i]))
		i++;
	while (is_sign(str[i]))
	{
		if (str[i] == '-')
			negativ = negativ * (-1);
		i++;
	}
	while (is_number(str[i]))
	{
		number = number * 10 + str[i] - '0';
		i++;
	}
	return (number * negativ);
}
