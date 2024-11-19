/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:30:21 by fcorona-          #+#    #+#             */
/*   Updated: 2024/10/23 17:41:57 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*res;
	char			f;

	f = (char) c;
	i = 0;
	res = NULL;
	while (s[i])
	{
		if (s[i] == f)
			res = (char *) &s[i];
		i++;
	}
	if (s[i] == f)
		res = (char *) &s[i];
	return (res);
}
