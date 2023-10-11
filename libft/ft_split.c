/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:21:32 by mdescalz          #+#    #+#             */
/*   Updated: 2023/10/11 12:12:35 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates (with malloc(3)) and returns an array of strings obtained by 
splitting ’s’ using the character ’c’ as a delimiter.  
The array must end with a NULL pointer.
s:  The string to be split.
c:  The delimiter character.
Return Values: The array of new strings || NULL if the allocation fails.*/

#include "libft.h"

int	ft_count_strings(char const *s, char c)
{
	int		check;
	size_t	count;

	count = 0;
	check = 0;
	while (*s)
	{
		if (*s != c && check == 0)
		{
			check = 1;
			count++;
		}
		else if (*s == c && check == 1)
		{
			check = 0;
		}
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		check;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	split = malloc((ft_count_strings(s, c) + 1) * sizeof(char *));
	if (!s || !split)
		return (NULL);
	check = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && check < 0)
			check = i;
		else if ((s[i] == c || i == ft_strlen(s)) && check >= 0)
		{
			split[j] = ft_substr(s, check, i - check);
			check = -1;
			j++;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
