NAME = get_next_line.a
INCLUDE = get_next_line.h

SRC_FILES = get_next_line.c\
			get_next_line_utils.c

OBJECTS_SRC_FILES = $(SRC_FILES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

AR = ar rcs

RM = rm -f

all: $(NAME)

$(NAME): $(OBJECTS_SRC_FILES)
	$(AR) $(NAME) $(OBJECTS_SRC_FILES)

%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJECTS_SRC_FILES)

fclean: clean
	$(RM) $(NAME)

re: fclean all
