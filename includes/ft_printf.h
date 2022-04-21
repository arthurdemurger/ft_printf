/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 22:21:16 by ademurge          #+#    #+#             */
/*   Updated: 2022/04/21 22:49:11 by ademurge         ###   ########.fr       */
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
** Define Constants
*/

# define DECIMAL "0123456789"
# define UP_HEXADECIMAL "0123456789ABCDEF"
# define LOW_HEXADECIMAL "0123456789abcdef"
# define SIGNED 1
# define UNSIGNED 0

/*
** Printf function
*/

int		ft_printf(const char *, ...);

/*
** Utils functions
*/

int		ft_strlen(char *str);
void	ft_putchar(char c, int *count);
void	ft_putstr(char *str, int *count);
void	ft_putnbr(int n, int *count);

/*
** Number conversion functions
*/

void	ft_putnbr_base(int nbr, int sign, char *base_set, int *count);

/*
** Conversion functions
*/

int		is_conversion(char c);
void	do_conversion(char c, va_list args, int *count);

/*
** Print memory functions
*/

void	ft_print_address(void *add, int *count);

#endif