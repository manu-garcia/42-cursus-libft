
NAME = libft.a
SRC = ./ft_isalpha.c
OBJ = $(SRC:.c=.o)
CFLAGS += -Wall -Wextra -Werror

$(NAME): $(OBJ) compile build

all: $(NAME)

re: fclean build

build: $(OBJ)
	ar rcs $(NAME) $(OBJ)

compile:
	gcc $(CFLAGS) -c -o $(OBJ) $(SRC)

compile-no-flags:
	gcc -c -o $(OBJ) $(SRC)

clean: $(OBJ)
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

norminette:
	norminette -R CheckForbiddenSourceHeader | grep Error

test:
	echo "No test defined"
