/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 10:11:31 by fcorona-          #+#    #+#             */
/*   Updated: 2025/01/02 10:55:14 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int 	*res;
	int	i;
	int 	n;

	n = 0;
	if (end - start < 0)
		n = -n;
	else
		n = (end - start);
	
	res = malloc((n + 1) * sizeof(int));
	i = 0;
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

int		absolute_value(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int		main(int argc, char **argv)
{
	void (argc);
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

#include <stdio.h>
#include <stdlib.h>
/*
int *ft_range(int start, int end);

int main(int argc, char **argv)
{
	(void)argc;
	int	arr_len;
	int	*arr;

	arr_len = abs(atoi(argv[2]) - atoi(argv[1]));
	arr = ft_rrange(atoi(argv[1]), atoi(argv[2]));
	for (int i = 0; i <= arr_len; i += 1)
		printf("%d\n", arr[i]);
	free(arr);
	return (EXIT_SUCCESS);
}*/
