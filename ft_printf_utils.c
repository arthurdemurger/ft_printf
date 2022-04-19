/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:13:15 by ademurge          #+#    #+#             */
/*   Updated: 2022/04/19 18:02:58 by ademurge         ###   ########.fr       */
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

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	c;

	i = -1;
	c = 0;
	while (src[c])
		c++;
	if (size)
	{
		while (src[++i] && i < (size - 1))
			dest[i] = src[i];
		dest[i] = 0;
	}
	return (c);
}

int	is_conversion(char c)
{
	char	*lst_conv;

	lst_conv = "cspdiuxX%";
	while (*lst_conv)
		if (c == *lst_conv++)
			return (1);
	return (0);
}

int	nb_before_conv(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = -1;
	while(str[++i])
		if (str[i] == '%' && is_conversion(str[i + 1]))
			return(i);
	return(-1);
}

/*
void	do_conversion(char c, va_list args)
{
	
}
*/