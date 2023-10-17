/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:21:32 by mdescalz          #+#    #+#             */
/*   Updated: 2023/10/14 16:20:05 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates (with malloc(3)) and returns an array of strings obtained by
splitting ’s’ using the character ’c’ as a delimiter.
The array must end with a NULL pointer.
s:  The string to be split.
c:  The delimiter character.
Return Values: The array of new strings || NULL if the allocation fails.*/

#include "libft.h"

static size_t	ft_count_substrings(const char *s, char delimiter)
{
	size_t	count;
	int		check;

	count = 0;
	check = 0;
	while (*s)
	{
		if (*s != delimiter)
		{
			if (!check)
			{
				count++;
				check = 1;
			}
		}
		else
			check = 0;
		s++;
	}
	return (count);
}

static void	ft_free_split(char **split, size_t i)
{
	while (i > 0)
	{
		free(split[--i]);
	}
	free(split);
}

static char	**ft_extract_substrings(const char *s, char c, size_t substr_count)
{
	char		**split;
	const char	*start;
	size_t		i;

	i = 0;
	split = (char **)malloc(sizeof(char *) * (substr_count + 1));
	if (!split || !s)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			start = s;
			while (*s && *s != c)
				s++;
			split[i] = ft_substr(start, 0, s - start);
			if (!split[i] && (ft_free_split(split, i), 1))
				return (NULL);
			i++;
		}
		else
			s++;
	}
	split[i] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	size_t	substr_count;
	char	**split;

	if (!s)
		return (NULL);
	substr_count = ft_count_substrings(s, c);
	split = ft_extract_substrings(s, c, substr_count);
	return (split);
}
