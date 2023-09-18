/*The function isalnum() is used to check 
that the character is alphanumeric or not. 
It returns non-zero value, if the character 
is alphanumeric means letter or number otherwise, returns zero*/

#include "libft.h"

int	ft_isalnum(int arg)
{
	if (ft_isalpha(arg) == 1 || ft_isdigit(arg) == 1)
		return (1);
	else
		return (0);
}
