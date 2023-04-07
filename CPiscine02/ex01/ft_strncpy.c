#include <unistd.h>
#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;

    i = 0;
    while ((src[i] != '\0') && (i <= n))
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
    dest[i] = '\0';
    i++;
    }
    return (dest);
}
   
/*Contar el numero de caracteres de source, reemplazarlo uno a uno por los de destination.
Cuando destination llegue al size del string, que imprima nulos*/
/*int main(void)
{
    unsigned    int size_source;
    char    destination[] = "seeeeeeeeeeeeeeee"; 
    char    source[] = "desss";

    size_source = 11; 

    printf("%s \n", source);
    printf("%s \n", destination);
    ft_strncpy(destination, source, size_source);
    printf("%s \n", source);
    printf("%s \n", destination);
}*/