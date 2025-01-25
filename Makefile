# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isousa-s <isousa-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/26 16:22:37 by isousa-s          #+#    #+#              #
#    Updated: 2025/01/25 18:29:04 by isousa-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a

SRC = ft_printf.c \
ft_printf_utils.c \
ft_printf_hex_utils.c \

OBJ = ${SRC:.c=.o}

CC = cc
FLAGS = -Wall -Werror -Wextra
RM = rm -f
AR = ar rcs

%.o: %.c ft_printf.h
	${CC} ${FLAGS} -c $< -o $@

all: $(NAME)

$(NAME): ${OBJ}
	${AR} ${NAME} ${OBJ}

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY:	all clean fclean re bonus