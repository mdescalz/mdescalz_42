/*The isascii() function tests for an ASCII character (in the range 0 to 127). 
Returns: Nonzero if c is an ASCII character; otherwise, zero*/

#include "libft.h"

int	ft_isascii(int arg)
{
	if (arg >= 0 && arg <= 127)
		return (1);
	else
		return (0);
}
