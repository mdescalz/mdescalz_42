/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:10:33 by mdescalz          #+#    #+#             */
/*   Updated: 2023/10/05 11:46:01 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates (with malloc(3)) and returns a new string,
which is the result of the concatenation of ’s1’ and ’s2’.
s1: The prefix string.
s2: The suffix string.
return values
The new string.
NULL if the allocation fails.*/

#include "libft.h"

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
