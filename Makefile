# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alex <alex@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/13 09:24:28 by atabarea          #+#    #+#              #
#    Updated: 2025/03/25 11:52:28 by alex             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = push_swap.c main.c ./src/free_stack.c ./src/free_stacks.c ./src/push_to.c\
 	./src/reverse_rotate.c ./src/rotate.c ./src/sort_chunks.c\
	./src/stack_init_from_strings.c ./src/stack_init.c ./src/stack_pop.c\
	./src/stack_push.c ./src/swap.c ./src/tiny_sort.c ./src/ft_atoi.c\
	./src/ft_split.c ./src/struct_init.c
OBJ = $(SRC:.c=.o)
INCLUDE = push_swap.h
all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ) 

%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re bonus