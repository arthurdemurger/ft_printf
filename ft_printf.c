/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 22:23:38 by ademurge          #+#    #+#             */
/*   Updated: 2022/04/19 16:12:37 by ademurge         ###   ########.fr       */
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
		if (str[i] == '%')
			array_functions(str[++i], va_arg(args, const char));
	}

	va_end(args);
	return (0);
}
