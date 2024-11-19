/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:04:34 by fcorona-          #+#    #+#             */
/*   Updated: 2024/10/21 17:05:00 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp_d;
	unsigned char	*tmp_s;

	tmp_s = (unsigned char *)src;
	tmp_d = (unsigned char *)dest;
	if ((!src) && (!dest))
		return (dest);
	while (n > 0)
	{
		*tmp_d++ = *tmp_s++;
		n--;
	}
	return (dest);
}
