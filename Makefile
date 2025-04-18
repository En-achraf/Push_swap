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
       src/sort_first_tow.c \
       src/sort_five.c \
       src/sort_four.c \
       src/swap_op.c\
       src/sort_big.c \
       src/stack_utiles.c \
       src/sorting_helpers.c \
       src/rotation_op.c \
       src/push_op.c \
       src/rev_rotation_op.c \
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