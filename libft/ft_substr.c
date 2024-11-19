/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:04:12 by fcorona-          #+#    #+#             */
/*   Updated: 2024/10/30 14:41:41 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	ft_memcpy(substr, s + start, len);
	substr[len] = '\0';
	return (substr);
}

/*
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub_str;
	unsigned int	s_str;

	if (!s)
		return (NULL);
	s_str = ft_strlen(s);
	if (!s_str)
		return (NULL);
	if (start >= s_str)
		return (ft_strdup(""));
	if (len > s_str - start)
		len = s_str - start;
	sub_str = (char *)malloc((len + 1) * sizeof(char));
	if (!sub_str)
		return (NULL);
	ft_memcpy(sub_str, s + start, len);
	sub_str[len] = '\0';
	return (sub_str);
}*/
