# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/18 22:21:01 by ademurge          #+#    #+#              #
#    Updated: 2022/04/21 22:54:43 by ademurge         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= 	ft_conversion.c \
					ft_print_memory.c \
					ft_printf_utils.c \
					ft_printf.c \
					ft_putnbr_base.c

OBJS			= ${SRCS:.c=.o}

NAME			= libftprintf.a

CFLAGS			= -Wall -Wextra -Werror

%o:				%c
				@gcc ${CFLAGS} -I./includes -c $< -o ${<:.c=.o}

$(NAME):		${OBJS}
				@ar -rcs $@ $^
				@echo "...Everything compiled!"

all:			$(NAME)

clean:
				@rm -f ${OBJS}

fclean:			clean
				@rm -f $(NAME)
				@echo "...Everything removed!"

re:				fclean all
				@echo "...Completed!"

.PHONY:		all clean fclean re