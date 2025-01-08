/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 11:39:01 by fcorona-          #+#    #+#             */
/*   Updated: 2024/12/09 16:50:13 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	max(int* tab, unsigned int len)
{
	if (len == 0)
		return (0);

	int max = tab[0];
	unsigned int i = 1;
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return max;
}
/*
int main(int ac, char ag**)
{
	if (ac > 1)
		write(1, '0', 1);

}*/
