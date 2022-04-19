/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:54:39 by ademurge          #+#    #+#             */
/*   Updated: 2022/04/19 18:03:16 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str)
{
	while (str && *str)
		write(1, *str++, 1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*src;
	char	*str;
	size_t	size;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	size = ft_strlen(&s[start]);
	if (size > len)
		size = len;
	src = (char *)s;
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, &src[start], size + 1);
	return (str);
}
