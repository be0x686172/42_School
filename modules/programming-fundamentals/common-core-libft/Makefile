NAME = a

CC = cc
FLAGS = -Wall -Wextra -Werror -Iincludes

SRC = main.c \
	$(wildcard src/ft_*.c) \
	$(wildcard tests/test_*.c)

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(NAME) $(OBJ)

re: fclean all

.PHONY: all clean fclean re