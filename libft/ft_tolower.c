/*tolower() function in C is used to convert
the uppercase alphabet to the lowercase alphabet. 
It does not affect characters other than uppercase characters.*/

#include "libft.h"

int	ft_tolower(int arg)
{
	if (arg >= 65 && arg <= 90)
		return (arg +32);
	else
		return (arg);
}
