/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:58:25 by mdescalz          #+#    #+#             */
/*   Updated: 2023/10/05 11:23:52 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *string, int character, size_t n)
{
	unsigned char	*str;
	unsigned char	c;

	c = (unsigned char)character;
	str = (unsigned char *)string;
	while (n--)
	{
		if (*str == c)
			return (str);
		str++;
	}
	return (NULL);
}
