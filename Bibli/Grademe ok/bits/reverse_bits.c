/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 14:29:31 by fcorona-          #+#    #+#             */
/*   Updated: 2025/01/06 14:32:45 by fcorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char reverse_bits(unsigned char octet)
{
	unsigned char res;
	int i;
	
	res = 0;
	i = 8;

	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (res);
}

