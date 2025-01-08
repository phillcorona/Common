/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 16:10:44 by fcorona-          #+#    #+#             */
/*   Updated: 2025/01/06 16:29:11 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void pgcd(int a, int b)
{
	int n;

	n = a;
	while (n > 0)
	{
		if (a % n == 0 && b % n == 0)
		{
			printf("%d", n);
			return;
		}
		n--;
	}
}

int main(int ac, char **av)
{
	if (ac == 3)
		pgcd(atoi(av[1]), atoi(av[2]));
	printf("\n");
	return (0);
}
