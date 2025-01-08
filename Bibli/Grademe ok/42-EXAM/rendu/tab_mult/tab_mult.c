/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 12:04:52 by fcorona-          #+#    #+#             */
/*   Updated: 2024/12/20 20:15:29 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int n;

	n = 0;
	while (*str >= '0' && *str <= '9')
	{
		n = n * 10 + (*str - '0');
		str++;
	}
	return (n);
}

void	ft_putnbr(int n)
{
	char res;

	if (n >= 10)
		ft_putnbr(n / 10);
	res = (n % 10) + '0';
	write(1, &res, 1);
}

void tab_mult(char *str)
{
	int i;
	int n;
	int res;

	i = 1;
	n = ft_atoi(str);
	while (i <= 9)
	{
		res = i * n;
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(n);
		write(1, " = ", 3);
		ft_putnbr(res);		
		write(1, "\n", 1);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		tab_mult(av[1]);
	else
		write(1, "\n", 1);
	return (0);
}
