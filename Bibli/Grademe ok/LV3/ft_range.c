/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 11:10:29 by fcorona-          #+#    #+#             */
/*   Updated: 2025/01/02 11:17:48 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int *ft_range(int start, int end)
{
	int res;
	int i;

	res = malloc(abs(end - start) + 1) * sizeof(int))
	if (!res)
		return (0);
	i = 0;
	if (start < end)
	{
		while (start <= end)
		{
			res[i] = start;
			start += 1;
			i++;
		}
	}
	else
	{
		while(start >= end)
		{
			res[i] = start;
			start -= 1;
			i++;
		}
	}
	return (res);
}
