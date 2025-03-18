/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 10:32:08 by fcorona-          #+#    #+#             */
/*   Updated: 2025/01/24 10:34:00 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERVER_H
# define SERVER_H

# include <signal.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_message
{
	char	current_char;
	int		bit_index;
}	t_message;

#endif
