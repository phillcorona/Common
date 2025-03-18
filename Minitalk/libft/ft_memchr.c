/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:56:30 by fcorona-          #+#    #+#             */
/*   Updated: 2024/10/23 11:44:25 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	f;
	size_t			i;

	str = (unsigned char *) s;
	f = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (str[i] == f)
			return ((void *) &str[i]);
		i++;
	}
	return (0);
}
