/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 09:37:33 by fcorona-          #+#    #+#             */
/*   Updated: 2025/01/06 09:57:47 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>

void rot_13 (char *str)
{
//	int i;
	char c;
	
//	i = 0;
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'm') || (*str >= 'A' && *str <= 'M'))
			c = *str + 13;
		else if ((*str >= 'N' && *str <= 'Z') || (*str >= 'n' && *str <= 'z'))
			c = *str - 13;
		else
			c = *str;
		write(1, &c, 1);
		str++;
	}
}

int main(int ac, char **av)
{

	if(ac == 2)
		rot_13(av[1]);
	write(1, "\n", 1);
	return (0);
}
