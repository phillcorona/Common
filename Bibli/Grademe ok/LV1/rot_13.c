/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:58:09 by fcorona-          #+#    #+#             */
/*   Updated: 2024/12/16 17:53:41 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rot_13(char *str)
{
	char c;
	int i;
	
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
			c = str[i] + 13;
		else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
			c = str[i] - 13;
		else
			c = str[i];
		write (1, &c , 1);
		i++;
	}
}


int main(int ac, char **av)
{
	if (ac == 2)
		rot_13(av[1]);
	write(1, "\n", 1);
	return (0);
}
