/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:13:18 by okapshai          #+#    #+#             */
/*   Updated: 2024/02/27 13:19:16 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	char	*p;

	str = malloc((ft_strlen(src) + 1) * sizeof(char));
	p = str;
	if (str == NULL)
	{
		return (0);
	}
	while (*src)
		*p++ = *src++;
	*p = '\0';
	return (str);
}

/*
#include <stdio.h>

int main()
{
    char source[] = "Hello Olga";
    printf("String size : %d\n",ft_strlen(source));
   
    char* target1 = ft_strdup(source);
    printf("My function : %s\n", target1);

    char* target2 = strdup(source);
    printf("Real function : %s\n", target2);
    
    free(target1);
    free(target2);
    return 0;
}
*/
