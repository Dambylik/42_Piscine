/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:53:23 by okapshai          #+#    #+#             */
/*   Updated: 2024/02/21 14:38:15 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	if (nb > 0)
	{
		result = nb * ft_recursive_factorial(nb - 1);
	}
	return (result);
}
