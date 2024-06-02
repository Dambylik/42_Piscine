/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:34:15 by okapshai          #+#    #+#             */
/*   Updated: 2024/02/15 19:43:02 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			while (str[i] == to_find[j] && str[i] != '\0' && to_find[j] != '\0')
			{
				i++;
				j++;
			}
			if (to_find[j] == '\0')
				return (str);
		}
		str++;
	}
	return (0);
}
