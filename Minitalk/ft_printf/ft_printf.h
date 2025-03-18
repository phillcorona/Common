/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftprintf.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <fcorona-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 19:27:46 by fcorona-          #+#    #+#             */
/*   Updated: 2024/11/05 16:30:55 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
//write,
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>

# define HEX_UPP_BASE "0123456789ABCDEF"
# define HEX_LOW_BASE "0123456789abcdef"

int		ft_printf(char const *str, ...);
void	ft_print_pchar(char c, int *i);
void	ft_print_pstr(char *str, int *i);
void	ft_print_pptr(void *ptr, int *i);
void	ft_print_nbr(int num, int *i);
void	ft_print_nbr_base(unsigned long int vl, const char *base, int *i);
void	ft_print_nbr_unsig(unsigned int num, int *i);
void	ft_print_num_hex(unsigned long ptr, const char *hex_dig, int *i);
void	check_type(va_list args, const char *str, int *count);
void	ft_print_num(int num, int *i);
int		ft_atoi(const char *str);

#endif
