/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 09:44:01 by fcorona-          #+#    #+#             */
/*   Updated: 2024/12/31 10:23:37 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>

void hidenp(char *agulha, char *palheiro)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (agulha[i] != 0)
	{
		while (palheiro[j] != 0 && agulha[i] != palheiro[j])
			j++;
		if (palheiro[j] == 0)
		{
		 	write(1, "0", 1);
			return ;	
		}
		j++;
		i++;		
	}
	write(1, "1", 1);
}

int main(int ac, char **av)
{
	if (ac == 3)
		hidenp(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
