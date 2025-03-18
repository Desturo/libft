NAME := libft.a
CC := gcc
CFLAGS := -Wall -Werror -Wextra
# CFLAGS =: -Wall -Werror -Wextra -fsanitize=address

objects := ft_isalpha.o ft_isascii.o ft_isalnum.o ft_isdigit.o ft_isprint.o \
		 ft_memset.o ft_strlen.o

all: $(NAME)

$(NAME): $(objects)
	ar r libft.a $^

clean:
	rm -r $(objects)

fclean: clean
	rm -r $(NAME)

re: fclean all


$(objects): %.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

.PHONY: all fclean clean re

