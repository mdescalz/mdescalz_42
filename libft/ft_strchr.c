/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:12:44 by mdescalz          #+#    #+#             */
/*   Updated: 2023/10/05 11:41:58 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strchr() function returns a pointer to the first occurrence
of the character c in the string s. return a pointer to the
matched character or NULL if the character is not found.  The
terminating null byte is considered part of the string, so that
if c is specified as '\0', these functions return a pointer to
the terminator.*/

#include "libft.h"

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
