NAME = bsq
PATH_SRC =
FLAG = -Wall -Wextra -Werror
OPTION = -c
SRC = main.c
OBJ = main.o

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(OPTION) $(SRC) -o ${NAME}

clean:
	/bin/rm -f $(OBJ)
fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
