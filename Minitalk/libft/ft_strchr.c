/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:52:50 by fcorona-          #+#    #+#             */
/*   Updated: 2024/10/23 17:39:56 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			f;

	i = 0;
	f = (char) c;
	while (s[i])
	{
		if (s[i] == f)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == f)
		return ((char *) &s[i]);
	return (NULL);
}
