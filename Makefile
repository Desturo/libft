# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/18 16:32:32 by nschneid          #+#    #+#              #
#    Updated: 2025/03/18 17:37:09 by nschneid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
CC := cc
CFLAGS := -Wall -Werror -Wextra
# CFLAGS =: -Wall -Werror -Wextra -fsanitize=address

files := ft_isalpha.c ft_isascii.c ft_isalnum.c ft_isdigit.c ft_isprint.c \
		 ft_memset.c ft_strlen.c

all: $(NAME)

$(NAME): $(files)
	ar -rcs libft.a $^.o

$(files)
	$(CC) $(CFLAGS) -c $^ -o $^.o

clean:
	rm -r $(objects)

fclean: clean
	rm -r $(NAME)

re: fclean all

.PHONY: all fclean clean re

