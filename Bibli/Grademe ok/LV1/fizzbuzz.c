/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 09:13:41 by fcorona-          #+#    #+#             */
/*   Updated: 2024/12/31 09:27:01 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int n)
{
//	int res;

//	res = n;
	if (n > 10)
		ft_putnbr(n / 10);
//	res = res % 10 + '0';
	n = n % 10 + '0';
	write(1, &n, 1);
}

int main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_putnbr(i);
		write(1, "\n",1);
		i++;
	}
	return (0);
}
