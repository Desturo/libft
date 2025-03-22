# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/18 16:32:32 by nschneid          #+#    #+#              #
#    Updated: 2025/03/22 15:45:09 by nschneid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
CC := cc
CFLAGS := -Wall -Werror -Wextra
# CFLAGS =: -Wall -Werror -Wextra -fsanitize=address

FILES := ft_isalpha.c ft_isascii.c ft_isalnum.c ft_isdigit.c ft_isprint.c \
		 ft_memset.c ft_strlen.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		 ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
		 ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		 ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
		 ft_strtrim.c ft_split.c

OBJECTS := $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rcs libft.a $(OBJECTS)

$(OBJECTS): %.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean clean re
