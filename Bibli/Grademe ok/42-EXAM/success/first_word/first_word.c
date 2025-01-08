/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 11:01:00 by fcorona-          #+#    #+#             */
/*   Updated: 2024/12/19 11:23:55 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	first_word(char *str)
{
	if (!str)
		return (0);
	while (*str == ' ' || *str == '\t')
		str++;
	while (*str != ' ' && *str != '\t' && *str)
		write(1, str++, 1);
	return (0);
}

int main(int ac, char **av)
{
	if (ac == 2)
		first_word(av[1]);
	write(1, "\n",1);
	return (0);
}
