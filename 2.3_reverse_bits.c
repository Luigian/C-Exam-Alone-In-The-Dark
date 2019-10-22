/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 09:38:46 by exam              #+#    #+#             */
/*   Updated: 2019/10/21 21:37:59 by lusanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	bit;
	int				i;
	int				result;

	i = 0;
	result = 0;
	while (i < 8)
	{
		bit = octet >> i & 1;
		result = (result * 2) + bit;
		i++;
	}
	return ((unsigned char)result);
}

int		main(void)
{
	unsigned char c;

	c = '*';
	printf("%c\n", c);
	printf("%c\n", reverse_bits(c));
	return (0);
}
