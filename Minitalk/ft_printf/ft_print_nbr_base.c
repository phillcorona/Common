/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr_base.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:40:56 by fcorona-          #+#    #+#             */
/*   Updated: 2024/11/06 14:40:36 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen(const char *str)
{
	int	ln;

	if (!str)
		return (0);
	ln = 0;
	while (str[ln])
		ln++;
	return (ln);
}

void	ft_print_nbr_base(unsigned long int vl, const char *base, int *i)
{
	int	leng;

	leng = ft_strlen(base);
	if (vl / leng)
		ft_print_nbr_base(vl / leng, base, i);
	ft_print_pchar(base[vl % leng], i);
}
