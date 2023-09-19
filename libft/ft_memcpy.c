/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:24:37 by mdescalz          #+#    #+#             */
/*   Updated: 2023/09/19 12:48:42 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The memcpy() function copies n bytes
from memory area src to memory area dest
The	memcpy(void) function returns a pointer to dest.*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned const char	*source;
	unsigned char		*dest;
	size_t				i;

	i = 0;
	source = src;
	dest = dst;
	while (dst == src || n == 0)
		return (dest);
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dest);
}
