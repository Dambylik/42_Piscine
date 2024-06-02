/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 11:47:46 by okapshai          #+#    #+#             */
/*   Updated: 2024/02/11 14:21:19 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

//creation of the horizontal line

void	ft_print(int x, char left, char middle, char right)
{
	int	horizontal;

	horizontal = 1;
	if (x > 0)
	{
		ft_putchar(left);
	}
	while (horizontal < (x - 1))
	{
		ft_putchar(middle);
		horizontal++;
	}
	if (x > 1)
	{
		ft_putchar(right);
	}
	ft_putchar('\n');
}

//pattern creation

void	rush(int x, int y)
{
	int	vertical;

	vertical = 1;
	if (x > 0 && y > 0)
	{
		ft_print(x, 'o', '-', 'o');
	}
	while (vertical < y - 1 && x > 0)
	{
		ft_print(x, '|', ' ', '|');
		vertical++;
	}
	if (y > 1 && x > 0)
	{
		ft_print(x, 'o', '-', 'o');
	}
}
