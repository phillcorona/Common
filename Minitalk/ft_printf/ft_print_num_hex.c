/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num_hex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <fcorona-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:40:56 by fcorona-          #+#    #+#             */
/*   Updated: 2024/11/05 16:34:13 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_num_hex(unsigned long ptr, const char *hex_dig, int *i)
{
	if (ptr >= 16)
	{
		ft_print_num_hex(ptr / 16, hex_dig, i);
		ft_print_pchar(hex_dig[ptr % 16], i);
	}
	else
		ft_print_pchar(hex_dig[ptr % 16], i);
}
