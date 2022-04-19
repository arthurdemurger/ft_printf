/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:13:15 by ademurge          #+#    #+#             */
/*   Updated: 2022/04/19 16:16:27 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ptf_strchr(int c)
{
	char	*lst_conv;
	int		i;

	lst_conv = "cspdiuxX%";
	
	i = -1;
	while (lst_conv[++i])
		if (lst_conv[i] == (char) c)
			return ((char *)&lst_conv[i]);
	return (NULL);
}