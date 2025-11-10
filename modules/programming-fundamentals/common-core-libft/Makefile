NAME = libft.a

CC = cc
FLAGS = -Wall -Wextra -Werror -Iincludes

SRC = $(wildcard src/ft_*.c)
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(NAME) $(OBJ)

re: fclean all

.PHONY: all clean fclean re