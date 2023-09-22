/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:43:59 by mdescalz          #+#    #+#             */
/*   Updated: 2023/09/22 12:05:05 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strcmp() function compares the two strings s1 and s2. 
It returns an integer less than, equal to, or greater than zero if s1 is found, 
respectively, to be less than, to match, or be greater than s2.
The strncmp() function is similar, except it only compares 
the first (at most) n bytes of s1 and s2.*/

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (str1[i] && str2[i] && i < n
		&& (unsigned char)str1[i] == (unsigned char)str2[i])
		i++;
	if (i < n)
		return (int)((unsigned char)str1[i] - (unsigned char)str2[i]);
	else
		return (0);
}
