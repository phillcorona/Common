/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 09:28:34 by fcorona-          #+#    #+#             */
/*   Updated: 2024/12/31 09:42:02 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int max(int* tab, unsigned int len)
{
	int max;

	max = 0;
	if (len == 0)
		return (0);
	while (len--)
	{
		if (*tab > max)
			max = *tab;
		tab++;
	}
	return (max);
}
/*
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    unsigned int len1 = 5;
    int arr2[] = {-1, -2, -3, -4, -5};
    unsigned int len2 = 5;
    int arr3[] = {42};
    unsigned int len3 = 1;
    int arr4[] = {};
    unsigned int len4 = 0;

    printf("Teste 1: Maior valor = %d\n", max(arr1, len1)); // Esperado: 5
    printf("Teste 2: Maior valor = %d\n", max(arr2, len2)); // Esperado: 0
    printf("Teste 3: Maior valor = %d\n", max(arr3, len3)); // Esperado: 42
    printf("Teste 4: Maior valor = %d\n", max(arr4, len4)); // Esperado: 0

    return 0;
}*/
