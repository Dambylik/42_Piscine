/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 13:59:05 by okapshai          #+#    #+#             */
/*   Updated: 2024/02/20 12:54:13 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	while (argc > 1)
	{
		argc--;
	}
	if (argc == 1)
	{
		i = 0;
		while (argv[argc - 1][i] != '\0')
		{
			write (1, &argv [argc - 1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
