/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 10:15:18 by fcorona-          #+#    #+#             */
/*   Updated: 2025/01/06 11:28:35 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *str)
{
	int n;

	n = 0;
	while (*str >= '0' &&  *str <= '9')
	{
		n = n * 10 + (*str - '0');
		str++;
	}
	return (n);
}

void ft_putnbr(int n)
{
	char res;

	if (n > 9)
		ft_putnbr(n / 10);
	res = (n % 10) + '0';
	write(1, &res, 1);
}

int is_prime(int n)
{
	int i;

	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;	
	}
	return (1);
}

int add_prime_sum(int n)
{
	int sum;
	int i;

	sum = 0;
	i = 2;
	while (i <= n)
	{
		if (is_prime(i) == 1)
			sum = sum + i;
		i++;
	}
	return (sum);
}

int main(int ac, char **av)
{
	int n;

	if ((ac == 2) && (n = ft_atoi(av[1])))
		ft_putnbr(add_prime_sum(n));
	else
		ft_putnbr(0);
	write(1, "\n", 1);
	return (0);
}
