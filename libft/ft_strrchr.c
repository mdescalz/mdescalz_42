/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:00:09 by mdescalz          #+#    #+#             */
/*   Updated: 2023/09/20 14:20:54 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strrchr() function returns a pointer to the last occurrence
of the character c in the string s.*/

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*null;
	int		length;

	null = NULL;
	length = ft_strlen(str);
	while (length >= 0)
	{
		if (str[length] == (char)c)
			return ((char *)(str + length));
		else
			length--;
	}
	return (null);
}
