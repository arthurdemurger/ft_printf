/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 22:21:16 by ademurge          #+#    #+#             */
/*   Updated: 2022/04/19 15:00:55 by ademurge         ###   ########.fr       */
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

#endif