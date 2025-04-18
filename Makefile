# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acennadi <acennadi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/14 13:00:50 by isel-kha          #+#    #+#              #
#    Updated: 2025/04/18 20:42:25 by acennadi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = push_swap
BONUS = checker
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I./includes

UTILES_SRCS = src/ft_printf/ft_printf.c \
              src/ft_printf/ft_more_format.c \
              src/ft_printf/ft_putchar.c \
              src/ft_printf/ft_putnbr.c \
              src/ft_printf/ft_putstr.c \
              src/ft_printf/ft_puthex.c \
              src/ft_printf/ft_putnb_hex.c \
              src/ft_printf/ft_unputnbr.c \
              src/utiles/utiles_functions.c

SRCS = src/main.c \
       src/input_check.c \
       src/parsing.c \
       src/parsing_utiles.c \
       src/return_error.c \
	$(UTILES_SRCS)

OBJS = $(SRCS:.c=.o)
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean