/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:42:52 by fcorona-          #+#    #+#             */
/*   Updated: 2024/10/28 15:56:01 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*result;
	size_t			s_total;

	s_total = count * size;
	if (size && ((s_total / size) != count))
		return (NULL);
	result = malloc(s_total);
	if (!result)
		return (NULL);
	ft_bzero(result, s_total);
	return (result);
}
