/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 10:55:42 by fcorona-          #+#    #+#             */
/*   Updated: 2024/12/16 11:30:31 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	alpha_mirror(char *str)
{
	char	c;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			c = ('a' + 'z') - *str;
		else if (*str >= 'A' && *str <= 'Z')
			c = ('A' + 'Z') - *str;
		else
			c = *str;
		write(1, &c, 1);
		str++;
	}
}


int main(int ac, char **av)
{
	if (ac == 2)
		alpha_mirror(av[1]);
	else
	write(1, "\n", 1);
	return(0);
}
