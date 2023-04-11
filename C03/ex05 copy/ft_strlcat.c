/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 13:11:51 by mdescalz          #+#    #+#             */
/*   Updated: 2023/04/11 16:43:21 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	count;
	
	i = 0;
	j = 0;
	count = 0;

	if (size != 0)
	{
		while (dest[i] != '\0')
		{
			i++;
		}
		while (src[i] != '\0' && j < (size -1))
		{
			dest[i] = src[j];
			i++;
			j++;
		}
	}
	dest[i] = '\0';
	return (i + j);
}

int	main(void)
{
	char	destination[] = "Hello ";
	char	source[] = "World";
	unsigned int	size;
	size = 6;
	printf("%d", ft_strlcat(destination, source, size));
}
