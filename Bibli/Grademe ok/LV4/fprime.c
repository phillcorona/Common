/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 11:11:52 by fcorona-          #+#    #+#             */
/*   Updated: 2024/12/30 16:24:23 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int is_prime(int n)
{
	int i;

	i = 2;
	while(i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}


void fprime(char *str)
{
	int n;
	int factor = 2;
	int first = 1;
	
	n = atoi(str);
	if (n == 1)
		printf("1");
	while (factor <= n)
	{
		if (n % factor == 0 && is_prime(factor))
		{
			if (first == 1)
				printf("%d", factor);
			else
				printf("*%d", factor);
			first = 0;
			n = n / factor;
		}
		else
			factor++;
	}
}



int main(int ac, char **av)
{
	if (ac == 2)
		fprime(av[1]);
	printf("\n");
	return(0);
}
