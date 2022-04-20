/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:08:50 by ademurge          #+#    #+#             */
/*   Updated: 2022/04/20 17:05:51 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	hex_digit(int nb)
{
	if (nb >= 0 && nb < 10)
		return ('0' + nb);
	else
		return ('a' + nb - 10);
}

void	ft_print_address(void *add, int *count)
{
	int		i;
	int		c;
	long	p;
	char	str[17];

	p = (long)add;
	c = (sizeof(p) << 3) - 4;
	i = 0;
	str[16] = 0;
	while (c >= 0)
	{
		str[i++] = hex_digit((p >> c) & 0xf);
		c -= 4;
	}
	i = 0;
	ft_putstr("0x", count);
	while (str[i] == '0')
		i++;
	if (i == 16)
		ft_putchar('0', count);
	else
		ft_putstr(&str[i], count);
}
