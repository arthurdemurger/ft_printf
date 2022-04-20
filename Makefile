# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/18 22:21:01 by ademurge          #+#    #+#              #
#    Updated: 2022/04/20 10:38:08 by ademurge         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= 	conversion.c \
					ft_printf_utils.c \
					ft_printf.c \
					print_functions.c

OBJS			= ${SRCS:.c=.o}

NAME			= libftprintf.a

CFLAGS			= -Wall -Wextra -Werror

%o:				%c
				@gcc ${CFLAGS} -I./includes -c $< -o ${<:.c=.o}

$(NAME):		${OBJS}
				@ar -rcs $@ $^
				@echo "...Everything compiled!"

all:			$(NAME)

bonus:			$(BONUS_OBJS) $(OBJS)
				@ar -rcs $(NAME) $^
				@echo "...Everything + Bonus compiled!"
clean:
				@rm -f ${OBJS} $(BONUS_OBJS)

fclean:			clean
				@rm -f $(NAME)
				@echo "...Everything removed!"

re:				fclean all
				@echo "...Completed!"

.PHONY:		all clean fclean re print