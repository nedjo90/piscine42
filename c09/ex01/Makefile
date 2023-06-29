# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nhan <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/23 12:46:09 by nhan              #+#    #+#              #
#    Updated: 2023/06/27 00:06:19 by nhan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
LIB = libft.a
INCDIRS = ./includes
CFLAGS = -Wall -Wextra -Werror -I $(INCDIRS)
OBJ = $(patsubst %.c, %.o, $(SRCS))

all : ${LIB}

%.o : %.c
	$(CC) $(CFLAGS) -c -o $@ $^

$(LIB) : $(OBJ)
	ar rc $(LIB) $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(LIB)

re : fclean all
