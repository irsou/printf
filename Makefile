# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isousa-s <isousa-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/26 16:22:37 by isousa-s          #+#    #+#              #
#    Updated: 2024/12/26 16:47:37 by isousa-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c \
ft_printf_utils.c \

OBJ = ${SRC:.c=.o}
OBJ_BONUS = ${SRC_BONUS:.c=.o}

CC = cc
FLAGS = -Wall -Werror -Wextra
RM = rm -f
AR = ar rcs

%.o: %.c libftprintf.h
	${CC} ${FLAGS} -c $< -o $@

all: $(NAME)

$(NAME): ${OBJ}
	${AR} ${NAME} ${OBJ}

bonus:${NAME} ${OBJ_BONUS}
	${AR} ${NAME} ${OBJ} ${OBJ_BONUS}

clean:
	${RM} ${OBJ} ${OBJ_BONUS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY:	all clean fclean re bonus