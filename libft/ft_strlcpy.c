/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:27:40 by mdescalz          #+#    #+#             */
/*   Updated: 2023/10/05 11:56:12 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strlcpy() function copies up to size - 1 characters 
from the NUL-terminated string src to dst, NUL-terminating the result.*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
	size_t	i;
	size_t	src_len;

	src_len = 0;
	while (src[src_len])
		src_len++;
	if (dst_size == 0)
		return (src_len);
	i = 0;
	if (dst_size != 0)
	{
		while (src[i] && i < (dst_size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}
