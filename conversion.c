/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 00:24:10 by ademurge          #+#    #+#             */
/*   Updated: 2022/04/20 01:16:00 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	is_conversion(char c)
{
	char	*lst_conv;

	lst_conv = "cspdiuxX%";
	while (*lst_conv)
		if (c == *lst_conv++)
			return (1);
	return (0);
}

void	do_conversion(char c, va_list args)
{
	if (c == 's')
		ft_putstr(va_arg(args, char *));
	else if (c == 'c')
		ft_putchar(va_arg(args, int));
	else if (c == 'd')
		ft_putnbr(va_arg(args, int));
}
