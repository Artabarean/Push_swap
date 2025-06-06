# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/13 09:24:28 by atabarea          #+#    #+#              #
#    Updated: 2025/04/08 09:43:37 by atabarea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = push_swap.c ./src/organizer.c ./src/sort_chunks.c ./src/arguments_valid.c\
 	./src/reverse_rotate.c ./src/rotate.c ./src/push_to.c ./src/free_stacks.c\
	./src/stack_init_from_strings.c ./src/stack_init.c ./src/stack_pop.c\
	./src/stack_push.c ./src/swap.c ./src/sort_three.c ./src/char_search.c\
	./src/ft_atoi_long.c ./src/ft_split.c ./src/ft_calloc.c ./src/find_max_median.c\
	./src/ft_bzero.c ./src/struct_init.c ./src/ft_isdigit.c\
	./src/chunk_algorithm.c ./src/check_max_min.c ./src/ft_strlen.c
OBJ = $(SRC:.c=.o)
INCLUDE = push_swap.h
all: $(NAME)

$(NAME): $(OBJ)
%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re