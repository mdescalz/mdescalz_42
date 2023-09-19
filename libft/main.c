#include "libft.h"

int	main(void)
{
	char 	source [50] = "Hello World";
	char	destination [50] = "World";
	size_t	number;

	number = 2;

	printf("%zu \n", ft_memmove(destination, source, number));
	printf("%s", destination);
}
