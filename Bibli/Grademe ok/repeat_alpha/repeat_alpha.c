/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 09:54:26 by fcorona-          #+#    #+#             */
/*   Updated: 2024/12/09 11:35:55 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_letter(char str)
{
	if (!str)
		return (0);	
	if (str >= 'a' && str <= 'z')
		return (str - 'a' + 1);
	if (str >= 'A' && str <= 'Z')
		return (str - 'A' + 1);
	return (0);
}

void repeat_alpha(char *arg)
{
	int	index;


/*	if (!arg)
		return (NULL); */
	while (*arg)
	{
		if ((*arg >= 'a' && *arg <= 'z') || (*arg >= 'A' && *arg <= 'Z'))
		{
			index = check_letter(*arg);
			while (index --)
				write (1, arg, 1);
		}
		else
			write(1, arg, 1);
		arg++;
	}
	write(1, "\n", 1);
}


int	main(int ac, char **argv)
{
	int	n;

	n = 1;
	if (ac == 2)
//	{
//		while (n < ac)
//		{
			repeat_alpha(argv[1]);
//			n++;
//		}
//	}
	else
		write(1, "\n", 1);
	return (0);
}

