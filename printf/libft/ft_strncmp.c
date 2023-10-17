/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:43:59 by mdescalz          #+#    #+#             */
/*   Updated: 2023/09/28 11:14:42 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strcmp() function compares the two strings s1 and s2.
It returns an integer less than, equal to, or greater than zero if s1 is found,
respectively, to be less than, to match, or be greater than s2.
The	strncmp(void) function is similar, except it only compares
the first (at most) n bytes of s1 and s2.*/

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	i = 0;
	ptr1 = (unsigned char *)str1;
	ptr2 = (unsigned char *)str2;
	while (ptr1[i] && ptr2[i] && i < n && ptr1[i] == ptr2[i])
		i++;
	if (i < n)
		return ((ptr1[i] - ptr2[i]));
	else
		return (0);
}
