/*The isdigit() in C is a function that can be used 
to check if the passed character is a digit or not. 
It returns a non-zero value if it's a digit, else it returns 0.*/

int	ft_isdigit(int arg)
{
	if (arg >= 48 && arg <= 57)
		return (1);
	else
		return (0);
}
