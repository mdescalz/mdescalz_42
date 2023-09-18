#include "libft.h"

int	main(void)
{
	char 	source [50] = "Hello ";
	char	destination [50] = "World";
	size_t	destination_size;

	destination_size = 5;

	printf("%zu \n", ft_strlcat(destination, source, destination_size));
	printf("%s", destination);
}
