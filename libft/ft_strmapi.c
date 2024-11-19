/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:30:00 by fcorona-          #+#    #+#             */
/*   Updated: 2024/10/27 18:01:34 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*result;
	size_t		s_len;
	size_t		i;

	if (!f || !s)
		return (NULL);
	s_len = ft_strlen(s);
	result = (char *)malloc((s_len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		result[i] = (*f)(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
