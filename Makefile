# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aqueiroz <aqueiroz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/21 23:41:49 by aqueiroz          #+#    #+#              #
#    Updated: 2023/10/22 00:30:00 by aqueiroz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = raytracer

FILES = main.c

OBJ = $(FILES:.c=.o)

CC = clang
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	make -C libs/vector
	$(CC) $(FLAGS) -o $(NAME) $(OBJ) -L libs/vector -lvector

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	make -C libs/vector clean
	rm -f $(OBJ)

fclean: clean
	make -C libs/vector fclean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re