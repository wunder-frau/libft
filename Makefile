# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: istasheu <istasheu@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 10:50:22 by istasheu          #+#    #+#              #
#    Updated: 2023/11/08 12:36:23 by istasheu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c	\
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strncmp.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_strdup.c \
	ft_calloc.c	\
	ft_atoi.c \
	ft_strlcat.c \
	ft_substr.c	\
	ft_strjoin.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c

SRCS_BONUS = ft_lstnew.c \

OBJ = $(SRCS:.c=.o)
OBJ_BONUS = $(OBJ) $(SRCS_BONUS:.c=.o)
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus: $(OBJ) $(OBJ_BONUS)
	ar rcs $(NAME) $(OBJ) $(OBJ_BONUS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
