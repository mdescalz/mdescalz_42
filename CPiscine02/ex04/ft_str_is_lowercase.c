#include <unistd.h>
#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    int i;

    i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 97 && str[i] <= 122)
            i++;
        else
            return(0);
    } 
    return(1);
}
/*int main(void)
{
    char    source[] = "a";
    printf("%d", ft_str_is_lowercase(source));
}*/