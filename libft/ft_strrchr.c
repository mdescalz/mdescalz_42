/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:00:09 by mdescalz          #+#    #+#             */
/*   Updated: 2023/10/05 11:58:25 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strrchr() function returns a pointer to the last occurrence
of the character c in the string s.*/

#include "libft.h"

char	*ft_strrchr(const char *str, int character)
{
	int		length;
	char	c;
	char	*ptr;

	length = ft_strlen(str);
	c = (char)character;
	ptr = (char *)str;
	while (length >= 0)
	{
		if (str[length] == c)
			return (ptr + length);
		else
			length--;
	}
	return (NULL);
}
