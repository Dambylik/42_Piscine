/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 20:32:16 by okapshai          #+#    #+#             */
/*   Updated: 2024/02/24 21:03:19 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

char	is_min(char c)
{
	return (c >= 'a' && c <= 'z');
}

char	is_maj(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_min(str[i]) && !(is_alpha(str[i - 1])))
		{
			str[i] = str[i] - 32;
		}
		if (is_maj(str[i]) && is_alpha(str[i - 1]))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
