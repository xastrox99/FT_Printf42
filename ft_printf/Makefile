# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbaazzy <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/20 14:44:28 by mbaazzy           #+#    #+#              #
#    Updated: 2021/11/23 14:30:55 by mbaazzy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ./srcs/s_print.c ./srcs/ft_printf.c ./srcs/ft_printhexa.c ./srcs/ft_putnbr.c ./srcs/check_format.c ./srcs/ft_printstr.c ./srcs/ft_putchar.c ./srcs/ft_strlen.c ./srcs/processing1.c ./srcs/hexa_traitement.c ./srcs/di_traitement.c ./srcs/u_traitement.c ./srcs/ft_putu.c ./srcs/x_traitement.c ./srcs/ft_printp.c
NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rc
HEADER = ./include/ft_printf.h
OBJS = $(SRCS:.c=.o)

all : $(NAME)

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -o $@ -I $(HEADER) -c $<

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : clean fclean all
