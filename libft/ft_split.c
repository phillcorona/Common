/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:31:55 by fcorona-          #+#    #+#             */
/*   Updated: 2024/10/24 18:47:43 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_tm_word(char const *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	if (!s)
		return (0);
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	word_tm;
	int		i;

	result = (char **)malloc((ft_tm_word(s, c) + 1) * sizeof(char *));
	if (!s || !result)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_tm = ft_strlen(s);
			else
				word_tm = ft_strchr(s, c) - s;
			result[i++] = ft_substr(s, 0, word_tm);
			s = s + word_tm;
		}
	}
	result[i] = NULL;
	return (result);
}
