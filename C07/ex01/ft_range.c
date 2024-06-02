/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 10:35:40 by okapshai          #+#    #+#             */
/*   Updated: 2024/02/26 12:25:36 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	array = malloc(sizeof(int) * (max - min));
	if (!array)
	{
		return (0);
	}
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
/*
#include <stdio.h>

int main (void)
{
	int min = -21;
	int max = 10;
	int *tab = ft_range(min, max);
	int i = 0;
	int size = max - min;
	
	while (i < size)
{
	printf("%d\n", tab[i]);
	i++;
}
free (tab);

return (0);
}
*/
