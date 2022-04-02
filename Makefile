
NAME = libft.a
SRC := $(shell find . -name '*.c')
OBJ = $(SRC:.c=.o)
CFLAGS += -Wall -Wextra -Werror

$(NAME): $(OBJ) compile build

all: $(NAME)

re: fclean $(NAME)

build: $(OBJ)
	ar rcs $(NAME) $(OBJ)

compile:
	gcc $(CFLAGS) -c $(SRC)

compile-no-flags:
	gcc -c $(SRC)

clean: $(OBJ)
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

norminette:
	norminette -R CheckForbiddenSourceHeader | grep Error

test:
	echo "No test defined"
