/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 22:23:38 by ademurge          #+#    #+#             */
/*   Updated: 2022/04/19 17:57:59 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	char	*s;
	
	va_start(args, str);
	i = -1;
	while (str[++i])
	{
		if (str[i] == '%' && is_conversion(str[i + 1]))
			do_conversion(str[i + 1], args);
		s = ft_substr(str[i], 0, nb_before_conv(str[i]));
		ft_putstr(s);
		free(s);
		i += nb_before_conv(str[i]);
	}

	va_end(args);
	return (0);
}
