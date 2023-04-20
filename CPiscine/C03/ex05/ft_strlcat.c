/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 13:11:51 by mdescalz          #+#    #+#             */
/*   Updated: 2023/04/13 18:10:52 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>
#include <stdio.h>
#include <string.h>*/
unsigned int	ft_strlen_src(char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlen_dest(char *dest)
{
	unsigned int	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	strlen;

	i = 0;
	j = 0;
	strlen = 0;
	if (size <= ft_strlen_dest(dest))
		strlen = ft_strlen_src(src) + size;
	if (size > ft_strlen_dest(dest))
		strlen = ft_strlen_src(src) + ft_strlen_dest(dest);
	if (size != 0)
	{
		while (dest[i] != '\0')
			i++;
		while (src[j] != '\0' && i < (size - 1))
		{
			dest[i] = src[j];
			i++;
			j++;
		}
	}
	dest[i] = '\0';
	return (strlen);
}
/*int	main(void)
{
	char	destination[20] = "Hello ";
	char	source[] = "World";
	unsigned int	size;

	size = 12;
	printf("%d \n", ft_strlcat(destination, source, size));
	printf("%s \n", destination);
	printf("%d", strlcat(destination, source, size));
}*/
