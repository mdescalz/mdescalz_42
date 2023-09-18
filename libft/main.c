#include "libft.h"

int	main(void)
{
	char 	source [50] = "Hellofeg34tf";
	char	destination [50] = "Everyone";
	size_t	destination_size;

	destination_size = 8;

	printf("%zu \n", ft_strlcpy(destination, source, destination_size));
	printf("%s", destination);
}
