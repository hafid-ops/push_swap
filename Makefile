# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hcherif <hcherif@student.42warsaw.pl>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/20 13:24:38 by hcherif           #+#    #+#              #
#    Updated: 2026/09/17 14:49:15 by hcherif          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
PRINTF_DIR = ft_printf
PRINTF = $(PRINTF_DIR)/libftprintf.a
SRC = src/main src/stack/stack_utils \
	src/parse/parse_args \
	src/parse/parse_mode \
	src/operations/swap \
	src/operations/push \
	src/operations/rotate \
	src/operations/reverse_rotate \
	src/stack/stack_info \
	src/sort/sort_three \
	src/sort/sort_small

SRCS = $(addsuffix .c, $(SRC))
OBJS = $(addsuffix .o, $(SRC))

.c.o:
	@$(CC) $(CFLAGS) -Iinclude -I$(PRINTF_DIR) -c $< -o $@

all: $(NAME)

$(PRINTF):
	@$(MAKE) -C $(PRINTF_DIR)

$(NAME): $(OBJS) $(PRINTF)
	@$(CC) $(CFLAGS) $(OBJS) $(PRINTF) -o $(NAME)


clean:
	@rm -rf $(OBJS)
fclean: clean
	@rm -rf $(NAME)
re: fclean all

.PHONY: all clean fclean re 
