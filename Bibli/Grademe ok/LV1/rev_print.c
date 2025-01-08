/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:06:45 by fcorona-          #+#    #+#             */
/*   Updated: 2024/12/10 18:26:19 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void rev_print(char *str)
{
	int leng;

	leng = ft_strlen(str);
	while (leng >= 0)
		write(1, &str[leng--], 1);
}

int main(int ac,char **av)
{
	if (ac == 2)
		rev_print(av[1]);
//	else
//		rev_print(av[1]);
	write(1, "\n",1);
	return (0);
}	
