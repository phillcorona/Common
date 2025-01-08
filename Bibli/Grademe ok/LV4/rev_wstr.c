/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 11:20:29 by fcorona-          #+#    #+#             */
/*   Updated: 2025/01/02 13:28:01 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *s)
{
	int i;

	i = 0;
	while(s[i] != 0)
		i++;
	return (i);
}

void rev_wstr(char *str)
{
	
	int size;
	char *tmp;
	char *rev;

	tmp = str;
	size = ft_strlen(str) - 1;
	rev = NULL;
	
//	write(1, &size, 1);
	while (tmp[size])
	{
		if(tmp[size - 1] == ' ')
		{
			rev = &tmp[size];
			while (*rev && *rev != ' ')
			{
				write(1, &*rev, 1);
				rev++;
			}
			write(1, " ", 1);
		}
		else if (size == 0)
		{
			rev = &tmp[size];
			while (*rev && *rev != ' ')
			{
				write(1, &*rev, 1);
				rev++;
			}				
		}
		size--;
	}
//	write(1, "\n", 1);

}

int main(int ac, char **av)
{
	if (ac == 2)
		rev_wstr(av[1]);
	write(1, "\n", 1);
	return (0);
}
