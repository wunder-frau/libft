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
	ft_strrchr.c

OBJ = $(SRCS:.c=.o)
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean:
	rm -f $(OBJ)

fclean:
	clean rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
