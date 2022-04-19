/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 22:21:16 by ademurge          #+#    #+#             */
/*   Updated: 2022/04/20 01:17:57 by ademurge         ###   ########.fr       */
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
# include <stdio.h>

// TO DELETE TO DELETE TO DELETE TO DELETE TO DELETE TO DELETE TO DELETE
# define ICI printf("ici\n");
// TO DELETE TO DELETE TO DELETE TO DELETE TO DELETE TO DELETE TO DELETE

/*
** Printf function
*/

int		ft_printf(const char *, ...);

/*
** Print functions
*/

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int n);

/*
** Conversion functions
*/

int		is_conversion(char c);
void	do_conversion(char c, va_list args);

/*
** Utils functions
*/

size_t	ft_strlen(char *str);

#endif