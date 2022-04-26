# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmallett <nmallett@student.42quebec.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/14 11:29:48 by nmallett          #+#    #+#              #
#    Updated: 2022/04/26 12:23:52 by nmallett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIBFT_DIRECTORY 	= src/
OUTPUT_DIRECTORY 	= ./

COMPILER			= gcc
CFLAGS 				= -Wall -Wextra -Werror -D BUFFER_SIZE=42

FILES 				= src/ft_atoi \
						src/ft_bzero \
						src/ft_calloc \
						src/ft_isalnum \
						src/ft_isalpha \
						src/ft_isascii \
						src/ft_isdigit \
						src/ft_isprint \
						src/ft_itoa \
						src/ft_memchr \
						src/ft_memcmp \
						src/ft_memcpy \
						src/ft_memmove \
						src/ft_memset \
						src/ft_putchar_fd \
						src/ft_putendl_fd \
						src/ft_putnbr_fd \
						src/ft_putstr_fd \
						src/ft_putstr \
						src/ft_split \
						src/ft_strchr \
						src/ft_strcpy \
						src/ft_strdup \
						src/ft_striteri \
						src/ft_strjoin \
						src/ft_strlcat \
						src/ft_strlcpy \
						src/ft_strlen \
						src/ft_tolower \
						src/ft_strmapi \
						src/ft_strncmp \
						src/ft_strnew \
						src/ft_strnstr \
						src/ft_strrchr \
						src/ft_strrev \
						src/ft_strtrim \
						src/ft_substr \
						src/ft_toupper \
						src/ft_put_addr \
						src/ft_put_hex \
						src/ft_putchar \
						src/ft_putnbr_unsigned \
						src/get_next_line \
						src/ft_printf \

SRCS = $(addsuffix .c, $(FILES))
OBJS = $(addsuffix .o, $(FILES))

.c.o:
	${COMPILER} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
	ar rcs ${NAME} ${OBJS}

clean:
	rm -rf $(LIBFT_DIRECTORY)$(OBJS)
	/bin/rm -f $(LIBFT_DIRECTORY)$(OBJS)

all:	${NAME}

fclean:	clean
	/bin/rm -f $(NAME)

re:	fclean all
