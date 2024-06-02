/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 13:41:02 by okapshai          #+#    #+#             */
/*   Updated: 2024/02/20 12:58:31 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	j;

	while (argc >= 2)
	{
		j = 0;
		while (argv[argc - 1][j] != '\0')
		{
			write (1, &argv[argc - 1][j], 1);
			j++;
		}
		write (1, "\n", 1);
		argc = argc - 1;
	}
	return (0);
}
