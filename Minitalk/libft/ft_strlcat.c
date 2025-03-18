/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:06:10 by fcorona-          #+#    #+#             */
/*   Updated: 2024/10/29 15:32:48 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	space_left;

	src_len = ft_strlen(src);
	if (!dest && !size)
		return (src_len);
	if (size == 0)
		return (src_len);
	dest_len = ft_strlen(dest);
	if (size <= dest_len)
		return (src_len + size);
	space_left = size - dest_len - 1;
	dest += dest_len;
	while (space_left-- > 0 && *src)
		*dest++ = *src++;
	*dest = '\0';
	return (dest_len + src_len);
}

/*size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s_src;
	size_t	s_dst;
	size_t	space;

	s_src = ft_strlen(src);
	if (!dst && !size)
		return (s_src);
	if (size == 0)
		return (s_src);
	s_dst = ft_strlen(dst);
	if (size <= s_dst)
		return (s_src + size);
	space = size - s_dst - 1;
	dst += s_dst;
	while (space-- > 0 && *src)
		*dst++ = *src++;
	*dst = '\0';
	return (s_dst + s_src);
}*/
/* versao 2
			
			;
	dst += s_dst;
	while ((size - s_dst -1) > i && *src)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (s_dst + s_src);
}*/

/*	
	if ((size - s_dst) > s_src)
		ft_memcpy((dst + s_dst), src, (s_src + 1));
	else
	{
		ft_memcpy((dst + s_dst), src, (size - s_dst - 1));
		dst[size - 1] = '\0';
	}
	return (s_dst + s_src);
}*/
//      if (s_dst == size)
//              return (s_dst + s_sr);
