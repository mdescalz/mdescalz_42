/*is used to check whether the input character is a 
printable character on the screen (including the space character) or not
If a character passed is a printable character, it returns non-zero integer, 
if not it returns 0.*/

#include "libft.h"

int	isprint(int arg)
{
	if (arg >= 32 && arg < 127)
		return (1);
	else
		return (0);
}
