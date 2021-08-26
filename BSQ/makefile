NAME=bsq
SRCS=main.c
OBJECTS=main.o

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRCS)
	gcc  $(OBJECTS) -o $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
