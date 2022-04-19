/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 22:23:38 by ademurge          #+#    #+#             */
/*   Updated: 2022/04/20 01:16:33 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;

	va_start(args, str);
	i = -1;
	while (str[++i])
	{
		if (str[i] == '%' && is_conversion(str[i + 1]))
			do_conversion(str[++i], args);
		else
			ft_putchar(str[i]);
	}
	va_end(args);
	return (0);
}
