/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:56:23 by mdescalz          #+#    #+#             */
/*   Updated: 2023/09/22 12:23:55 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strnstr() function locates the first	occurrence of the  null-termi-
nated  string little in the string big, where not more than len charac-
ters are	searched.  Characters that appear after	a `\0'	character  are
not  searched. If little is an empty string,
big is returned; if little	occurs nowhere
in big, NULL is returned; otherwise a pointer to the first character of
the first occurrence of little is returned.*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle,
		size_t haystack_len)
{
	size_t	i;
	size_t	needle_len;

	i = 0;
	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	while (haystack[i] && (i + needle_len <= haystack_len))
	{
		if (ft_strncmp((haystack + i), needle, needle_len) == 0)
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}
