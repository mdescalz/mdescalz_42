/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:49:42 by mdescalz          #+#    #+#             */
/*   Updated: 2023/09/28 11:11:09 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*function appends the NUL-terminated string src to the end of dst.
It will append at most size - strlen(dst) - 1 bytes,
NUL-terminating the result.*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	size_t	i;
	size_t	count;
	size_t	strlen_src;
	size_t	strlen_dst;

	i = 0;
	strlen_dst = ft_strlen(dst);
	strlen_src = ft_strlen(src);
	if (dst_size <= strlen_dst)
		return (dst_size + strlen_src);
	count = strlen_dst;
	while (src[i] && count < (dst_size - 1))
	{
		dst[count] = src[i];
		i++;
		count++;
	}
	dst[count] = '\0';
	return (strlen_dst + strlen_src);
}
