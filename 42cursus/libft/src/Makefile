# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmallett <nmallett@42quebec.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/14 11:29:48 by nmallett          #+#    #+#              #
#    Updated: 2021/09/14 11:29:48 by nmallett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAIN_FILE=debug_main
NAME=libft.a
SRCS=$(MAIN_FILE).c
OBJECTS=$(MAIN_FILE).o

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRCS)
	gcc  $(OBJECTS) -o $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all