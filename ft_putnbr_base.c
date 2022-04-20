/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 12:10:44 by ademurge          #+#    #+#             */
/*   Updated: 2022/04/20 16:22:40 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	is_base_valide(char *base)
{
	int	i;
	int	j;

	i = -1;
	while (base[++i])
	{
		j = i;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[++j])
			if (base[i] == base[j])
				return (0);
	}
	if (i <= 1)
		return (0);
	return (1);
}

static void	ft_putchar_base(int nbr, char *base, int *count)
{
	write(1, &base[nbr], 1);
	*count += 1;
}

void	ft_putnbr_base(int nbr, int sign, char *base_set, int *count)
{
	unsigned int	size;
	unsigned int	un;

	if (!base_set)
		return ;
	un = nbr;
	size = ft_strlen(base_set);
	if (is_base_valide(base_set))
	{
		if (sign && nbr < 0)
		{
			un = -nbr;
			ft_putchar('-', count);
		}
		if (un > size - 1)
			ft_putnbr_base(un / size, sign, base_set, count);
		ft_putchar_base((un % size), base_set, count);
	}
}
