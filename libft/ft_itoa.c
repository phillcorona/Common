/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:32:27 by fcorona-          #+#    #+#             */
/*   Updated: 2024/10/27 19:35:38 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_isnegative_n(size_t *sign, int n)
{
	size_t	nbr;

	if (n < 0)
	{
		if (n == -2147483647 - 1)
			nbr = 1 + (size_t)2147483647;
		else
			nbr = -n;
		*sign = 1;
	}
	else
		nbr = n;
	return (nbr);
}

static size_t	ft_n_leng(int n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
	{
		i++;
		n = -n;
	}
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t	num_len;
	size_t	sign;
	size_t	abs_n;
	char	*result;

	num_len = ft_n_leng(n);
	sign = 0;
	abs_n = ft_isnegative_n(&sign, n);
	result = (char *)malloc((num_len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	if (sign)
		result[0] = '-';
	result[num_len] = '\0';
	while (sign < num_len--)
	{
		result[num_len] = (char)(abs_n % 10 + '0');
		abs_n /= 10;
	}
	return (result);
}
