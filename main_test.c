/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:16:59 by ademurge          #+#    #+#             */
/*   Updated: 2022/04/19 16:10:20 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	
	va_start(args, str);
	va_arg(args, );
	va_end(args);
	return (0);
}

int main (void)
{
	
	printf("%d", NULL);
	return (0);
}
