/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:54:39 by ademurge          #+#    #+#             */
/*   Updated: 2022/04/20 16:28:13 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

void	ft_putchar(char c, int *count)
{
	*count += 1;
	write (1, &c, 1);
}

void	ft_putstr(char *str, int *count)
{
	if (!str)
		ft_putstr("(null)", count);
	while (str && *str)
		ft_putchar(*str++, count);
}

void	ft_putnbr(int n, int *count)
{
	long	ln;

	ln = n;
	if (n < 0)
	{
		ln *= -1;
		ft_putchar('-', count);
	}
	if (ln > 9)
		ft_putnbr(ln / 10, count);
	ft_putchar(ln % 10 + 48, count);
}
