/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 22:21:16 by ademurge          #+#    #+#             */
/*   Updated: 2022/04/19 18:03:37 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

/*
** Libraries
*/

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

/*
** Printf function
*/

int	ft_printf(const char *, ...);

/*
** Print functions
*/

void	ft_putstr(char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);

/*
** Utils functions
*/

int		ft_strlen(char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
int		nb_before_conv(char *str);
int		is_conversion(char c);
void	do_conversion(char c, va_list args);

#endif