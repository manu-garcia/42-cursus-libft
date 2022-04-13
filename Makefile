
NAME = libft.a

MANDATORY_SRC := $(shell find . \( -name '*.c' -a -not -name '*bonus.c' \))
MANDATORY_OBJ = $(MANDATORY_SRC:.c=.o)

ALL_SRC := $(shell find . \( -name '*.c' \))
ALL_OBJ = $(ALL_SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

$(NAME): $(MANDATORY_OBJ) compile build

all: $(NAME)

re: fclean $(NAME)

build: $(MANDATORY_OBJ)
	ar rcs $(NAME) $(MANDATORY_OBJ)

build-bonus: $(ALL_OBJ)
	ar rcs $(NAME) $(ALL_OBJ)

compile:
	gcc $(CFLAGS) -c $(MANDATORY_SRC)

compile-bonus:
	gcc $(CFLAGS) -c $(ALL_SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

norminette:
	norminette -R CheckForbiddenSourceHeader | grep Error

bonus: $(ALL_OBJ) compile-bonus build-bonus

testme:
	rm -f .a.out
	rm -f $(ALL_OBJ)
	rm -f $(NAME)
	gcc -g $(ALL_SRC)

# .PHONY: test all clean fclean re bonus

