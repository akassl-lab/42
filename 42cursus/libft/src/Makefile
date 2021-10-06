# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/14 11:29:48 by nmallett          #+#    #+#              #
#    Updated: 2021/10/06 15:02:21 by nmallett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIBFT_DIRECTORY 	= ./
OUTPUT_DIRECTORY 	= ./

COMPILER			= gcc
CFLAGS 				= -Wall -Wextra -Werror

FILES 				= ft_atoi \
						ft_bzero \
						ft_calloc \
						ft_isalnum \
						ft_isalpha \
						ft_isascii \
						ft_isdigit \
						ft_isprint \
						ft_itoa \
						ft_memchr \
						ft_memcmp \
						ft_memcpy \
						ft_memmove \
						ft_memset \
						ft_putchar_fd \
						ft_putendl_fd \
						ft_putnbr_fd \
						ft_putstr_fd \
						ft_putstr \
						ft_split \
						ft_strchr \
						ft_strcpy \
						ft_strdup \
						ft_striteri \
						ft_strjoin \
						ft_strlcat \
						ft_strlcpy \
						ft_strlen \
						ft_strlowcase \
						ft_strmapi \
						ft_strncmp \
						ft_strnew \
						ft_strnstr \
						ft_strchr \
						ft_strrev \
						ft_strtrim \
						ft_substr \
						ft_toupper \

SRCS = $(addsuffix .c, $(FILES))
OBJS = $(addsuffix .o, $(FILES))

.c.o:
	${COMPILER} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
	ar rcs ${NAME} ${OBJS}

clean:
	/bin/rm -f $(OBJS)

all:	${NAME}

fclean:	clean
	/bin/rm -f $(NAME)

re:	fclean all
