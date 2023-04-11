/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 16:29:09 by mdescalz          #+#    #+#             */
/*   Updated: 2023/04/09 16:54:16 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>
#include <stdio.h>*/
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int	main(void)
//destination has to be bigger than source
{
    char	destination[] = "destination"; 
    char	source[] = "source";

    printf("%s \n", source);
    printf("%s \n", destination);
    ft_strcpy(destination, source);
    printf("%s \n", source);
    printf("%s \n", destination);
}*/
