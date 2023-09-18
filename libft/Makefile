NAME = libft.a
INCLUDE = libft.h

SRC_FILES = ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_tolower.c\
			ft_toupper.c\
			ft_strlen.c \
			ft_strlcpy.c\
			ft_strlcat.c\
			ft_memset.c

OBJECTS = $(SRC_FILES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

RM = rm -f

all: $(NAME)

$(NAME): $(OBJECTS) $(INCLUDE)
	$(AR) $(NAME) $(OBJECTS)

%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
