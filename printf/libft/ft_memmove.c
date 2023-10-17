/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:55:43 by mdescalz          #+#    #+#             */
/*   Updated: 2023/10/05 10:43:04 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  The memmove() function copies n bytes from memory area src to
memory area dest.  The memory areas may overlap: copying takes
place as though the bytes in src are first copied into a
temporary array that does not overlap src or dest, and the bytes
are then copied from the temporary array to dest.*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned const char	*source;
	unsigned char		*dest;

	source = src;
	dest = dst;
	if (dst == src || n == 0)
		return (dst);
	if (dest < source)
	{
		return (ft_memcpy(dst, src, n));
	}
	else
	{
		while (n > 0)
		{
			dest[n - 1] = source[n - 1];
			n--;
		}
	}
	return (dst);
}
