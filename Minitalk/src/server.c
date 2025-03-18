/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 19:25:57 by fcorona-          #+#    #+#             */
/*   Updated: 2025/01/15 19:25:58 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "server.h"
#include "../ft_printf/ft_printf.h"

t_message	g_message = {0, 7};

void	handler_signal(int signum)
{
	if (signum == SIGUSR1)
		g_message.current_char |= (1 << g_message.bit_index);
	else if (signum == SIGUSR2)
		g_message.current_char &= ~(1 << g_message.bit_index);
	g_message.bit_index--;
	if (g_message.bit_index < 0)
	{
		if (g_message.current_char == '\0')
			write(1, "\n", 1);
		else
			write(1, &g_message.current_char, 1);
		g_message.current_char = 0;
		g_message.bit_index = 7;
	}
}

void	check_signal_handlers(void)
{
	struct sigaction	sa;

	sa.sa_handler = &handler_signal;
	sigemptyset(&sa.sa_mask);
	sa.sa_flags = 0;
	if (sigaction(SIGUSR1, &sa, NULL) == -1
		|| sigaction(SIGUSR2, &sa, NULL) == -1)
	{
		write(2, "Error setting up signal handlers\n", 33);
		exit(EXIT_FAILURE);
	}
}

int	main(void)
{
	pid_t	pid;

	pid = getpid();
	ft_printf("This is the server PID: %d\n", pid);
	check_signal_handlers();
	while (1)
		pause();
	return (0);
}
