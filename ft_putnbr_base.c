/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 12:10:44 by ademurge          #+#    #+#             */
/*   Updated: 2022/04/21 15:11:34 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putchar_base(int nbr, char *base, int *count)
{
	write(1, &base[nbr], 1);
	*count += 1;
}

void	ft_putnbr_base(int nbr, int sign, char *base_set, int *count)
{
	unsigned int	size;
	unsigned int	un;

	un = nbr;
	size = ft_strlen(base_set);
	if (sign && nbr < 0)
	{
		un = -nbr;
		ft_putchar('-', count);
	}
	if (un > size - 1)
		ft_putnbr_base(un / size, sign, base_set, count);
	ft_putchar_base((un % size), base_set, count);
}
