/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:07:29 by fcorona-          #+#    #+#             */
/*   Updated: 2024/10/27 21:27:06 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*n_str;
	size_t	s_s1;
	size_t	s_s2;

	if (!s1 || !s2)
		return (NULL);
	s_s1 = ft_strlen(s1);
	s_s2 = ft_strlen(s2);
	n_str = (char *) malloc((s_s1 + s_s2 + 1) * sizeof(char));
	if (!n_str)
		return (0);
	ft_strlcpy(n_str, s1, s_s1 + 1);
	ft_strlcat(n_str, s2, (s_s1 + s_s2 + 1));
	return (n_str);
}
/*
ft_strlcpy(n_str, s1, s_s1 + 1)
ft_strlcat(n_str, s2, (s_s1 + s_s2 + 1))	*/
/*	while (s1[i])
                n_str[j++] = s1[i++];
        i = 0;
        while (s2[i])
                n_str[j++] = s2[i++];
        n_str[j] = 0;
*/
