/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:55:43 by mdescalz          #+#    #+#             */
/*   Updated: 2023/09/19 13:18:30 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned const char	*source;
	unsigned char		*dest;
	size_t				i;

	i = 0;
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
