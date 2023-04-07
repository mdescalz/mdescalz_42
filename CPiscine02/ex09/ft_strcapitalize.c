#include <unistd.h>
#include <stdio.h>

int ft_str_is_alpha(char c)
{
    if ((c >= 65 && c <= 90)|| (c >= 97 && c <= 122))
        return(1);
    else
        return(0);
}

int ft_str_is_numeric(char c)
{
    if ((c >= 48 && c <= 57))
        return(1);
    else
        return(0);
}

int ft_str_is_lowercase(char c)
{
    if (c >= 97 && c <= 122)
        return(1);
    else
        return(0);
} 

int ft_str_is_uppercase(char c)
{
    if (c >= 65 && c <= 90)
        return(1);
    else  
       return(0); 
}
    
char    *ft_strcapitalize(char *str)
{
    int firstword;
    int i;

    i = 0;
    firstword = 1; // palabra esta por empezar

    while(str[i] != '\0')
    {
        if(firstword == 1 && (ft_str_is_alpha(str[i]) == 1 
        || ft_str_is_numeric(str[i]) == 1 )) // si la primera letra que detectas no es alphanumerica
        {
            firstword = 0; // estas en medio de la palabra 
            if (ft_str_is_lowercase(str[i]) == 1)
            str[i] -= 32;
        }

        else if (firstword == 0 && ft_str_is_uppercase(str[i]) == 1)
            str[i] += 32;

        else if (firstword == 0 && (ft_str_is_alpha(str[i]) == 0 
        && ft_str_is_numeric(str[i]) == 0 ))
            firstword = 1; // has acabado la palabra
        i++;
    }
    return(str);
} 

int main(void)
{
    char    source[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s", ft_strcapitalize(source));
}
