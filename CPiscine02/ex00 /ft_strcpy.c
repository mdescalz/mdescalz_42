#include <unistd.h>
#include <stdio.h>

char    *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}
/*int main(void)
{
    char    destination[] = "source"; // destination has to be bigger than source
    char    source[] = "destination";

    printf("%s \n", source);
    printf("%s \n", destination);
    ft_strcpy(destination, source);
    printf("%s \n", source);
    printf("%s \n", destination);
}*/