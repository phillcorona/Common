/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:02:13 by fcorona-          #+#    #+#             */
/*   Updated: 2025/01/07 18:16:52 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int *res;
	int 	i;
	
	i = 0;
	res = malloc(sizeof(int)  * abs(end - start) + 1);
	if (!res)
		return (0);

	if (end >= start)
	{
		while (end >= start)
		{
			res[i] = end;
			end -= 1;
			i++;
		}
	}
	else
	{
		while (end <= start)
		{
			res[i] = end;
			end += 1;
			i++;
		}
	}
	return (res);
}

/*
#include <stdio.h>
#include <stdlib.h>

int		*ft_rrange(int start, int end);
int		absolute_value(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int		main(int argc, char **argv)
{
	int start = atoi(argv[1]);
	int end = atoi(argv[2]);

	int *arr = ft_rrange(start, end);

	int i = 0;
	while (i < 1 + absolute_value(end - start))
	{
		printf("%d", arr[i]);
        if (i < 1 + absolute_value(end - start) - 1)
            printf(", ");
		++i;
	}
	printf("\n");
}*/
