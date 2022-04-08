# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nathanmallett <nathanmallett@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/07 14:44:54 by nathanmalle       #+#    #+#              #
#    Updated: 2022/04/08 15:04:24 by nathanmalle      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =  ft_printf.c ft_libs.c
CC = gcc

FLAGS = -c -Wall -Wextra -Werror

RM = rm -rf

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(SRCS)
	ar -rcs $(NAME) $(OBJS)

all : $(NAME)

clean : 
		rm -rf $(OBJS)

fclean : clean
		rm -rf $(NAME)
		
re : fclean all

.PHONY = all clean fclean re