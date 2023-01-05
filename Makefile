# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndejsong <ndejsong@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/04 23:36:42 by ndejsong          #+#    #+#              #
#    Updated: 2023/01/05 02:56:47 by ndejsong         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC_FILES = ft_printf.c ft_str.c ft_base.c
OBJ_FILES = $(SRC_FILES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
HEADER = ft_printf.h

$(NAME): $(OBJ_FILES) $(HEADER)
	ar -rc $(NAME) $(OBJ_FILES)

all: $(NAME)

clean:
	rm -f $(OBJ_FILES)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re