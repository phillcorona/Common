/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:06:12 by fcorona-          #+#    #+#             */
/*   Updated: 2024/10/23 13:51:25 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	tmp = (unsigned char *) s;
	while (len > i)
	{
		tmp[i] = (unsigned char) c;
		i++;
	}
	return (s);
}
