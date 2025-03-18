/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:22:12 by fcorona-          #+#    #+#             */
/*   Updated: 2024/10/22 15:08:48 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_size;

	src_size = ft_strlen(src);
	if (src_size + 1 < size)
	{
		ft_memcpy(dst, src, src_size + 1);
	}
	else if (size != 0)
	{
		ft_memcpy(dst, src, size -1);
		dst[size - 1] = 0;
	}
	return (src_size);
}
