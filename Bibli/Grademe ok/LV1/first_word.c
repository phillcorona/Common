/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:15:59 by fcorona-          #+#    #+#             */
/*   Updated: 2024/12/09 18:58:19 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	first_word(char str)
{
	if (!str)
		return (0);
	while (*str)
	{
		if (str == " " || str == "/t")
			str++;
		if (str != " " || str != "/t")
		{
			write(1, str, 1);
			str++;
		}
	}
}



int main(int ac, char  **av)
{
	if (ac < 1)
		write(1, "\n", 1);
	else
		first_word(av[1]);
	return (0);
}
