/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 17:11:06 by fcorona-          #+#    #+#             */
/*   Updated: 2025/01/06 17:55:13 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int skip_whitespace(char *str, int i)
{
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	return (i);
}

int ft_wordlen(char *str)
{
        int i;

        i = 0;
        while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
                i++;
        return (i);
}

int print_word(char *str, int i, int *is_first)
{
	int word_len;

	i = skip_whitespace(str, i);
	word_len = ft_wordlen(str + i);
	if (*is_first == 0)
		write(1, " ", 1);
	write(1, str + i, word_len);
	*is_first = 0;
	return (i + word_len);
}

int epur_str(char *str)
{
	int i;
	int is_first;

	i = 0;
	is_first = 1;
	i = skip_whitespace(str, i);
	while( str[i] != '\0')
	{
		i = print_word(str, i, &is_first);
		i = skip_whitespace(str, i);
	}
	return (is_first);
}

int main(int ac, char **av)
{
	if (ac >= 2)
	{
		char *str = av[1];
		int i;
		int is_first;
		
		i = 0;
		i = skip_whitespace(str, i);
		i = i + ft_wordlen(str + i);
		is_first = epur_str(str + i);
		print_word(str, 0, &is_first);
	}
	write(1, "\n", 1);
	return (0);
}
