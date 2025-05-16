# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nschneid <nschneid@student.42heilbronn.de  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/18 16:32:32 by nschneid          #+#    #+#              #
#    Updated: 2025/05/16 17:54:24 by nschneid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
CC := cc
# CFLAGS =: -Wall -Werror -Wextra -fsanitize=address

OBJ_DIR := obj
SRC_DIR := src
INC_DIR := include
LIB_DIR := lib

FLAGS := -Wall -Werror -Wextra -I$(INC_DIR)

FILES := ft_isalpha.c ft_isascii.c ft_isalnum.c ft_isdigit.c ft_isprint.c \
		 ft_memset.c ft_strlen.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		 ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
		 ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		 ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
		 ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
		 ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		 ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		 ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
		 ft_lstmap.c ft_printf.c ft_printf_conversions.c ft_putnbrbase_fd.c \
		 ft_putunbrbase_fd.c get_next_line.c get_next_line_utils.c
OBJECTS := $(patsubst %.c,$(OBJ_DIR)/%.o,$(FILES))



all: $(NAME)

$(NAME): $(OBJECTS)
	@mkdir -p $(LIB_DIR)
	ar -rcs $(LIB_DIR)/$@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(LIB_DIR)

re: fclean all

.PHONY: all fclean clean re
