/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:05:50 by fcorona-          #+#    #+#             */
/*   Updated: 2024/10/24 15:07:49 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*tmp_d;
	unsigned char	*tmp_s;

	if ((!dest) && (!src))
		return (NULL);
	tmp_d = (unsigned char *)dest;
	tmp_s = (unsigned char *)src;
	if (tmp_s < tmp_d)
	{
		while (len--)
			tmp_d[len] = tmp_s[len];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			tmp_d[i] = tmp_s[i];
			i++;
		}
	}
	return (dest);
}
