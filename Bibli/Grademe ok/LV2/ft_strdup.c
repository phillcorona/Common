/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:46:59 by fcorona-          #+#    #+#             */
/*   Updated: 2024/12/16 13:29:12 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;
	i = 0;

	while (str[i])
		str++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int	i;

	if (!src)
		return (NULL);
	dup = (char *)malloc(ft_strlen(src) + 1);
	if (!dup)
		return(NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;				
	}
	dup[i] = '\0';
	return (dup);
}

/*
//char    *ft_strdup(char *src);

#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
    if(argc == 1)
    {
        printf("ft_strdup(\"\") = %s\n", ft_strdup(""));
        return(0);
    }
    printf("ft_strdup(\"%s\") = %s\n", argv[1], ft_strdup(argv[1]));
    return(0);
}*/
char    *ft_strdup(char *src);
#include <stdlib.h>
#include <stdio.h>

int main()
{
    char *original = "Hello, world!";
    char *copy = ft_strdup(original);

    if (copy)
    {
        printf("Original: %s\n", original);
        printf("Copy: %s\n", copy);
        free(copy);  // Don't forget to free the allocated memory
    }
    else
    {
        printf("Memory allocation failed\n");
    }

    return 0;
}

