#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_isalnum(int arg);
int	ft_isalpha(int arg);
int	ft_isascii(int arg);
int	ft_isdigit(int arg);
int	isprint(int arg);
int	ft_tolower(int arg);
int	ft_toupper(int arg);
int	ft_strlen(char *str);

size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size);

#endif
