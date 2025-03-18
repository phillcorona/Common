/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <fcorona-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:44:03 by fcorona-          #+#    #+#             */
/*   Updated: 2024/11/05 16:34:22 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_pstr(char *str, int *i)
{
	if (!str)
	{
		ft_print_pstr("(null)", i);
		return ;
	}
	while (*str)
	{
		ft_print_pchar(*str, i);
		str++;
	}
}
