/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:13:16 by fcorona-          #+#    #+#             */
/*   Updated: 2024/10/23 13:57:15 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*d_s1;
	unsigned char	*d_s2;

	i = 0;
	d_s1 = (unsigned char *) s1;
	d_s2 = (unsigned char *) s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (d_s1[i] != d_s2[i])
			return (d_s1[i] - d_s2[i]);
		i++;
	}
	return (0);
}
