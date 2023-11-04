/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:13:07 by mdescalz          #+#    #+#             */
/*   Updated: 2023/11/04 11:26:17 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *str, int character)
{
	char	*ptr;
	char	c;

	ptr = (char *)str;
	c = (char)character;
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

	if (!s1 || !s2)
		return (NULL);
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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;

	i = 0;
	if (!s)
		return (NULL);
	if (len == 0)
		return (ft_strdup(""));
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (NULL);
	while (s[start + i] && i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *str)
{
	char	*ptr;
	size_t	str_len;

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
	while (dst == src || n == 0)
		return (dest);
	while (n--)
	{
		*dest++ = *source++;
	}
	return (dst);
}