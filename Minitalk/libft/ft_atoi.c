/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:47:00 by fcorona-          #+#    #+#             */
/*   Updated: 2024/10/23 17:30:03 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if ((str[i] == '+') || str [i] == '-')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		result = (result * 10 + (str[i]) - '0');
		i++;
	}
	return (result * sign);
}

/*if (c == 9 || c == 10 || c == 11 || c == 12 || c == 13 || c == 32) */
/* str[i + 1] != '-') - verifica se existe + de - na string*/
