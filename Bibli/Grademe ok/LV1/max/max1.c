/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:37:28 by fcorona-          #+#    #+#             */
/*   Updated: 2024/12/09 16:48:16 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int max(int* tab, unsigned int len)
{
	int	max;
	int	n;
	
	n = 1;
	if (len == 0)
		return (0);
	max = tab[0];
	while (n < len)
	{
		if (max < tab[n]) 
			max = tab[n];
		n++;
	}	
	return (max);
}
