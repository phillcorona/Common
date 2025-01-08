/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:08:34 by fcorona-          #+#    #+#             */
/*   Updated: 2025/01/08 16:17:54 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int lcm(unsigned int a, unsigned int b)
{
	if (a == 0 || b == 0)
		return (0);
	unsigned int n;
	if (a > b)
		n = a;
	else
		n = b;
	while (1)
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		n++;
	}
}
