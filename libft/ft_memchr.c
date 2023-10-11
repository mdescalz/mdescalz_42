/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:58:25 by mdescalz          #+#    #+#             */
/*   Updated: 2023/10/11 12:19:15 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Searches for the first occurrence of the character c (an unsigned char) 
in the first n bytes of the string pointed to, by the argument str.
str − pointer to the block of memory where the search is performed.
c − value to be passed as an int, but the function performs a byte per byte 
search using the unsigned char conversion of this value.
n − This is the number of bytes to be analyzed.
Return Values: returns a pointer to the matching byte or NULL*/
 
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
