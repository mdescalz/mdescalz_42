NAME = libftprintf.a
LIBFTNAME = libft.a
CCFLAGS = -Wall -Werror -Wextra
LIBFTDIR = ./libft

SRCS = 	ft_printf.c  \
		ft_print_char.c \
		ft_print_str.c \
		ft_print_digit_10.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

makelibft:
	$(MAKE) -C $(LIBFTDIR)
	cp $(LIBFTDIR)/$(LIBFTNAME) .
	mv $(LIBFTNAME) $(NAME)

$(NAME): makelibft $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)
	cd $(LIBFTDIR) && $(MAKE) clean

fclean: clean
	rm -f $(NAME)
	cd $(LIBFTDIR) && $(MAKE) fclean

re: fclean all
