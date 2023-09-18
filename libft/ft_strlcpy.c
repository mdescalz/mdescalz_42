/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:27:40 by mdescalz          #+#    #+#             */
/*   Updated: 2023/09/18 11:14:58 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strlcpy() function copies up to size - 1 characters 
from the NUL-terminated string src to dst, NUL-terminating the result.*/

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size)
{
	size_t	i;
	size_t	src_len;

	src_len = 0;
	while (src[src_len])
		src_len++;
	if (dest_size == 0)
		return (src_len);
	i = 0;
	if (dest_size != 0)
	{
		while (src[i] && i < (dest_size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}
