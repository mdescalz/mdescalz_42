/*The toupper() function is used to convert lowercase alphabet to uppercase. 
i.e. If the character passed is a lowercase alphabet then the toupper() function 
converts a lowercase alphabet to an uppercase alphabet*/

#include "libft.h"

int	ft_toupper(int arg)
{
	if (arg >= 97 && arg <= 122)
		return (arg -32);
	else
		return (arg);
}
