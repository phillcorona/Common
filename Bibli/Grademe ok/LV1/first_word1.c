/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 11:15:34 by fcorona-          #+#    #+#             */
/*   Updated: 2024/12/12 12:48:32 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void first_word(char *str)
{
	if (!str)
		return (0);
	while (*str)
	{
		if ((str == " ") || (str == "\t"))
			str++;
		if ((str != "") || (str != "\t"))
		{
			write(1, str, 1);
			str++;
		}
	}
}

int main (int ac, char **av)
{
	if (ac < 1)
		return (1, "\n", 1);
	else
		first_word(av[1]);
	return (0);
}
