/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <fcorona-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 20:24:56 by fcorona-          #+#    #+#             */
/*   Updated: 2024/11/05 16:34:26 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_type(va_list args, const char *str, int *count)
{
	if (*str == 'c')
		ft_print_pchar(va_arg(args, int), count);
	else if (*str == 's')
		ft_print_pstr(va_arg(args, char *), count);
	else if (*str == 'p')
		ft_print_pptr(va_arg(args, void *), count);
	else if (*str == 'd' || *str == 'i')
		ft_print_nbr(va_arg(args, int), count);
	else if (*str == 'u')
		ft_print_nbr_unsig(va_arg(args, unsigned int), count);
	else if (*str == 'x')
		ft_print_num_hex(va_arg(args, unsigned int), "0123456789abcdef",
			count);
	else if (*str == 'X')
		ft_print_num_hex(va_arg(args, unsigned int), "0123456789ABCDEF",
			count);
	else if (*str == '%')
		ft_print_pchar('%', count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%' && *(str + 1))
		{
			str++;
			check_type(args, str, &i);
		}
		else
			ft_print_pchar(*str, &i);
		str++;
	}
	va_end(args);
	return (i);
}
