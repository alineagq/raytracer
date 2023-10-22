# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aqueiroz <aqueiroz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/22 00:17:29 by aqueiroz          #+#    #+#              #
#    Updated: 2023/10/22 00:29:50 by aqueiroz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libvector.a

FILES = vector.c vector_operations.c vector_rotations.c

OBJ = $(FILES:.c=.o)

CC = clang
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re