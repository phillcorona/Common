/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:49:16 by fcorona-          #+#    #+#             */
/*   Updated: 2024/10/24 18:09:01 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		end;
	char	*str;
	size_t	s_s1;

	if (!s1 || !set)
		return (NULL);
	s_s1 = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	i = 0;
	end = s_s1 - 1;
	if (s_s1 == 0)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[i]) && i <= end)
		i++;
	if (i > end)
		return (ft_strdup(s1 + end + 1));
	while (ft_strchr(set, s1[end]) && end >= 0)
		end--;
	str = malloc(end - i + 2);
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[i], (end - i + 2));
	return (str);
}
