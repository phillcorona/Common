/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 19:25:49 by fcorona-          #+#    #+#             */
/*   Updated: 2025/01/29 17:10:03 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../ft_printf/ft_printf.h"

void	send_bit(pid_t server_pid, char bit)
{
	if (bit == '1')
		kill(server_pid, SIGUSR1);
	else if (bit == '0')
		kill(server_pid, SIGUSR2);
	usleep(100);
}

void	send_char(pid_t server_pid, char c)
{
	int	bit;

	bit = 7;
	while (bit >= 0)
	{
		if ((c >> bit) & 1)
			send_bit(server_pid, '1');
		else
			send_bit(server_pid, '0');
		bit--;
	}
}

void	send_message(pid_t server_pid, char *message)
{
	int	i;

	i = 0;
	while (message[i])
	{
		send_char(server_pid, message[i]);
		i++;
	}
	send_char(server_pid, '\0');
}

int	main(int ac, char **av)
{
	pid_t	server_pid;

	if (ac != 3)
	{
		write(1, "Corret form to use: ./client [server_pid] [message]\n", 52);
		return (1);
	}
	server_pid = ft_atoi(av[1]);
	if (server_pid <= 0)
	{
		write(1, "Invalid PID\n", 12);
		return (1);
	}
	send_message(server_pid, av[2]);
	return (0);
}
