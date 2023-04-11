/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 16:32:53 by mdescalz          #+#    #+#             */
/*   Updated: 2023/04/10 12:27:37 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>
#include <stdio.h>*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
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
//Contar el numero de caracteres de source
//Reemplazarlo uno a uno por los de destination.
//Cuando destination llegue al size del string, que imprima nulos
/*int main(void)
{
    unsigned    int size_source;
    char    destination[] = "desss"; 
    char    source[] = "seeeeeeeeeeeee";

    size_source = 15; 

    printf("%s \n", source);
    printf("%s \n", destination);
    ft_strncpy(destination, source, size_source);
    printf("%s \n", source);
    printf("%s \n", destination);
}*/
