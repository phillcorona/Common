/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 11:55:52 by fcorona-          #+#    #+#             */
/*   Updated: 2024/12/16 12:37:04 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(const char *str)
{
	int res;
	int sign;

	res = 0;
	sign = 1;
	
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
	}

	return (res * sign);
}

#include <stdio.h>

int main(void)
{
    printf("%d\n", ft_atoi("   -123"));    // Output: -123
    printf("%d\n", ft_atoi("+456"));       // Output: 456
    printf("%d\n", ft_atoi("789abc"));     // Output: 789
    printf("%d\n", ft_atoi("   +0"));      // Output: 0
    printf("%d\n", ft_atoi(""));           // Output: 0
    printf("%d\n", ft_atoi("   -+42"));    // Output: 0 (invalid input)

    return 0;
}
