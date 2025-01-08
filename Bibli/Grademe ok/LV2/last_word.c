/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:00:14 by fcorona-          #+#    #+#             */
/*   Updated: 2025/01/07 12:54:52 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}

void last_word(char *str)
{
	int i;

	i = ft_strlen(str) - 1;
	while (((str[i] == ' ') || (str[i] == '\t')) && str[i] != 0)
		i--;
	while ((str[i] != ' ') && (str[i] != '\t') && str[i] != 0)
		i--;
	if (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		last_word(av[1]);
	write(1, "\n", 1);
	return (0);
}
