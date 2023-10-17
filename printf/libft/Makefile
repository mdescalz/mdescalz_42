NAME = libft.a
INCLUDE = libft.h

SRC_FILES =		ft_isalnum.c\
				ft_isalpha.c\
				ft_isascii.c\
				ft_isdigit.c\
				ft_isprint.c\
				ft_tolower.c\
				ft_toupper.c\
				ft_strlen.c \
				ft_strlcpy.c\
				ft_strlcat.c\
				ft_memset.c\
				ft_bzero.c\
				ft_memcpy.c\
				ft_memmove.c\
				ft_strchr.c\
				ft_strrchr.c\
				ft_strncmp.c\
				ft_memchr.c\
				ft_memcmp.c\
				ft_strnstr.c\
				ft_atoi.c\
				ft_calloc.c\
				ft_strdup.c\
				ft_substr.c\
				ft_strjoin.c\
				ft_strtrim.c\
				ft_substr.c\
				ft_split.c\
				ft_itoa.c\
				ft_strmapi.c\
				ft_striteri.c\
				ft_putchar_fd.c\
				ft_putstr_fd.c\
				ft_putendl_fd.c\
				ft_putnbr_fd.c

BONUS_FILES = 	ft_lstnew.c\
				ft_lstadd_front.c\
				ft_lstsize.c\
				ft_lstlast.c\
				ft_lstadd_back.c\
				ft_lstdelone.c\
				ft_lstclear.c\
				ft_lstiter.c\

OBJECTS_SRC_FILES = $(SRC_FILES:.c=.o)
OBJECTS_BONUS_FILES = $(BONUS_FILES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

RM = rm -f

all: $(NAME)

$(NAME): $(OBJECTS_SRC_FILES) $(INCLUDE)
	$(AR) $(NAME) $(OBJECTS_SRC_FILES)

bonus: $(OBJECTS_SRC_FILES) $(OBJECTS_BONUS_FILES) $(INCLUDE)
	$(AR) $(NAME) $(OBJECTS_BONUS_FILES) $(OBJECTS_SRC_FILES)

%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJECTS_SRC_FILES) $(OBJECTS_BONUS_FILES)

fclean: clean
	$(RM) $(NAME)

re: fclean all
