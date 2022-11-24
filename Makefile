# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/01 17:49:55 by fbrisson          #+#    #+#              #
#    Updated: 2022/11/24 16:41:59 by fbrisson         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_itoa.c ft_printf.c ft_print_hex.c ft_printnbr.c \
	ft_printptr.c ft_printstr.c ft_print_unsigned.c \
	ft_putchar.c

OBJ = ${SRC:.c=.o}

.c.o:
	cc -Wall -Wextra -Werror -c $< -o ${<:.c=.o}

all: ${NAME}

${NAME}: ${OBJ}
	ar -rcs ${NAME} ${OBJ}

clean:
	rm -f ${OBJ} ${BONUS_OBJ}

fclean: clean
	rm -f ${NAME}

re : fclean all

.PHONY: all clean fclean bonus re
