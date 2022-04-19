/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:54:39 by ademurge          #+#    #+#             */
/*   Updated: 2022/04/20 01:17:43 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (str && *str)
		write(1, str++, 1);
}

void	ft_putnbr(int n)
{
	long	ln;

	ln = n;
	if (n < 0)
	{
		ln *= -1;
		ft_putchar('-');
	}
	if (ln > 9)
		ft_putnbr(ln / 10);
	ft_putchar(ln % 10 + 48);
}
