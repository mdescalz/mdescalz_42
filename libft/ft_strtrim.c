/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:31:45 by mdescalz          #+#    #+#             */
/*   Updated: 2023/10/11 12:12:43 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters 
specified in ’set’ removed from the beginning and the end of the string.
s1:  The string to be trimmed.
set:  The reference set of characters to trim.
Return value: The trimmed string || NULL if the allocation fails.*/

#include "libft.h"

int	ft_get_start(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	size_t	check;

	i = 0;
	check = 0;
	len = ft_strlen(s1);
	while (i < len && check == 0)
	{
		if (ft_strchr(set, s1[i]) == 0)
			check = 1;
		else
			i++;
	}
	return (i);
}

int	ft_get_end(char const *s1, char const *set)
{
	size_t	i;
	size_t	check;
	size_t	len;

	i = 0;
	len = ft_strlen(s1);
	check = 0;
	while (i < len && check == 0)
	{
		if (ft_strrchr(set, s1[len - i - 1]) == 0)
			check = 1;
		else
			i++;
	}
	return (len - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	start = ft_get_start(s1, set);
	end = ft_get_end(s1, set);
	if (start >= end)
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1 + start, end - start + 1);
	return (str);
}
