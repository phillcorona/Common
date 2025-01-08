/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 08:17:31 by fcorona-          #+#    #+#             */
/*   Updated: 2024/12/30 08:50:59 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int n)
{
	int res;

	res = n;	
	if (n > 10)
		ft_putnbr(n / 10);
	res = (res % 10) + '0';
	write(1, &res, 1);
}


int main(void)
{
	int n;

	n = 1;

	while (n <= 100)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
			write(1,"fizzbuzz", 8);
		else if (n % 3 == 0)
			write(1, "fizz", 4);
		else if (n % 5 == 0)
			write(1, "buzz", 4);
		else// ((n % 3 != 0) || (n % 5 != 0))
			ft_putnbr(n);
		write(1, "\n", 1);
		n++;
	}
	return (0);
}
