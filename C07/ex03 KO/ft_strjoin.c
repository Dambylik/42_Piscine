/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:19:34 by okapshai          #+#    #+#             */
/*   Updated: 2024/02/27 16:26:05 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (dest[i] != '\0')
	{
	len++;
	i++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest [len + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*string;
	int		i;
	int		c;

	if (size == 0)
	{
		string = (char *) malloc(1 * sizeof(char *));
		*string = 0;
		return (string);
	}
	string = malloc(sizeof(strs));
	i = 0;
	c = 0;
	while (i < size)
	{
		ft_strcat(string, strs[i]);
		if (i < size - 1)
			ft_strcat(string, sep);
		i++;
	}
	return (string);
}
/*
#include <stdio.h>

int main (void)
{
	char *tab[4];
	tab[0] = "aa";
	tab[1] = "ba";
	tab[2] = "ca";
	tab[3] = "da";
	printf("%s", ft_strjoin(4, tab, "."));
	return (0);
}
*/
