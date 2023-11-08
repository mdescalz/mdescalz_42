/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:13:07 by mdescalz          #+#    #+#             */
/*   Updated: 2023/11/08 15:52:14 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *str, int character)
{
	char	*ptr;
	char	c;

	ptr = (char *)str;
	c = (char)character;
	if (!ptr)
		return (NULL);
	while (*ptr)
	{
		if (*ptr == c)
			return (ptr);
		else
			ptr++;
	}
	if (*ptr == c)
		return (ptr);
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	char	*result;

	if (!s1 && !s2)
		return (NULL);
	else if (!s1)
		return (ft_strdup(s2));
	ptr = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ptr)
		return (NULL);
	result = ptr;
	while (*s1)
	{
		*ptr = *s1;
		ptr++;
		s1++;
	}
	while (*s2)
	{
		*ptr = *s2;
		ptr++;
		s2++;
	}
	*ptr = '\0';
	return (result);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *str)
{
	char	*ptr;
	size_t	str_len;

	if (!str)
		return (NULL);
	str_len = ft_strlen(str);
	ptr = (char *)malloc(str_len + 1);
	if (ptr)
	{
		ft_memcpy(ptr, str, str_len);
		ptr[str_len] = '\0';
	}
	return (ptr);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned const char	*source;
	unsigned char		*dest;

	source = src;
	dest = dst;
	if (!dst || !src)
		return (NULL);
	while (dst == src || n == 0)
		return (dest);
	while (n--)
	{
		*dest++ = *source++;
	}
	return (dst);
}
