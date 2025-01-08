/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 15:25:07 by fcorona-          #+#    #+#             */
/*   Updated: 2025/01/08 15:37:52 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i;
	size_t j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (reject[j] != '\0')
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
size_t	ft_strcspn(const char *s, const char *reject);

int main(int argc, char **argv)
{
    if (argc == 3)
        printf("ft_strcspn(\"%s\", \"%s\") = %zu\n", argv[1], argv[2], ft_strcspn(argv[1], argv[2]));
    return(0);
}*/
