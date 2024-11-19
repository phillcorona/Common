/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:32:33 by fcorona-          #+#    #+#             */
/*   Updated: 2024/11/06 14:44:15 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_nbr(int num, int *i)
{
	if (num < 0)
	{
		ft_print_pchar('-', i);
		if (num == -2147483648)
		{
			ft_print_nbr((num / 10), i);
			ft_print_pchar('8', i);
		}
		ft_print_pchar('-', i);
		ft_print_nbr(-num, i);
	}
	else
	{
		if (num > 9)
			ft_print_nbr((num / 10), i);
		ft_print_pchar((char)('0' + num % 10), i);
	}
}
