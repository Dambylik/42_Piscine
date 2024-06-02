/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:58:43 by okapshai          #+#    #+#             */
/*   Updated: 2024/02/28 17:01:20 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}
/*
#include <stdio.h>

int main (void)
{
	int tab[] = {1, 3, 5, 7, 9, 0};
	
	ft_rev_int_tab(tab, 6);
	for(int i = 0; i < 6; i ++)
		printf("%d ", tab[i]);
	return 0;
}
*/
