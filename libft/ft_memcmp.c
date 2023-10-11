/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:39:59 by mdescalz          #+#    #+#             */
/*   Updated: 2023/10/11 12:20:18 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Compares the first n bytes of memory area str1 and memory area str2.
str1 − This is the pointer to a block of memory.
str2 − This is the pointer to a block of memory.
n − This is the number of bytes to be compared.*/

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)str1;
	ptr2 = (unsigned char *)str2;
	while (n--)
	{
		if (*ptr1 != *ptr2)
			return ((*ptr1 - *ptr2));
		ptr1++;
		ptr2++;
	}
	return (0);
}
