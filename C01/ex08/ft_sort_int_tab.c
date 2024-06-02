/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:02:25 by okapshai          #+#    #+#             */
/*   Updated: 2024/02/28 17:31:22 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
			temp = tab[j];
			tab[j] = tab[j + 1];
			tab[j + 1] = temp;
			}
			j++;
		}
		i++;
		if (temp == 0)
		{
			break ;
		}
	}
}
/*
#include <stdio.h>

int main (void)
{
        int tab[] = {1, 9, 4, 5, 2, 0};

        ft_sort_int_tab(tab, 6);
        for(int i = 0; i < 6; i ++)
                printf("%d ", tab[i]);
        return 0;
}
*/
