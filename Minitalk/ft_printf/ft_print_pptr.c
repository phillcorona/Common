/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <fcorona-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:43:40 by fcorona-          #+#    #+#             */
/*   Updated: 2024/11/05 16:34:19 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_pptr(void *ptr, int *i)
{
	unsigned long	p;

	p = (unsigned long) ptr;
	if (p)
	{
		ft_print_pstr("0x", i);
		ft_print_nbr_base(p, "0123456789abcdef", i);
	}
	else
		ft_print_pstr("(nil)", i);
}
