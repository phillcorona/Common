/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:32:26 by fcorona-          #+#    #+#             */
/*   Updated: 2025/01/06 12:23:21 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int ft_wordlen(char *s)
{
	int i;

	i = 0;
	while(s[i] && s[i] != ' ' && s[i] != '\t' && s[i] != '\n') 
		i++;
	return (i);
}

char *word_dupl(char *str)
{
	int i = 0;
	int len;
	char *word;
	
	i = 0;
	len = ft_wordlen(str);
	word = malloc(sizeof(char) * len + 1);
	word[len] = '\0';
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	return (word);
}

void fill_words(char **array, char *str)
{
	int word_index;
	       
	word_index = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n')
		str++;
	while (*str != '\0')
	{
		array[word_index] = word_dupl(str);
		word_index++;
		while (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n')
			str++;
		while (*str == ' ' || *str == '\t' || *str == '\n')
			str++;
	}
}

int count_words(char *str)
{
	int num_words;
	       
	num_words = 0;
	while(*str == ' ' || *str == '\t' || *str == '\n')
		str++;
	while (*str != '\0')
	{
		num_words++;
		while ((*str != '\0') && *str != ' ' && *str != '\t' && *str != '\n')
			str++;
		while(*str == ' ' || *str == '\t' || *str == '\n')
			str++;
	}
	return (num_words);
}

char **ft_split(char *str)
{
	int	n_words;
	char	**array;

	n_words = count_words(str);
	array = malloc(sizeof(char *) * (n_words + 1));
	if (!array)
		return (0);
	array[n_words] = 0;
	fill_words(array, str);
	return (array);
}
/*
#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char *str);

int main(int argc, char **argv)
{
	char	**split;
	int		i;

	if (argc == 2)
	{
		split = ft_split(argv[1]);
			printf("%s ", split[0]);
		i = 1;
		while (split[i] != 0)
		{
			printf("%s ", split[i]);
			i++;
		}
		printf("%s", split[i]);
	}
	printf("\n");
    return (0);
}*/
