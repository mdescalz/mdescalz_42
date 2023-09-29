/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:21:32 by mdescalz          #+#    #+#             */
/*   Updated: 2023/09/29 13:24:53 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_strings(char const *s, char c)
{
	int		check;
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	check = 0;
	while (s[i])
	{
		if (s[i] != c && check == 0)
		{
			check = 1;
			count++;
		}
		else if (s[i] == c && check == 1)
		{
			check = 0;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		index;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	split = malloc((ft_count_strings(s, c) + 1) * sizeof(char *));
	if (!s || !split)
		return (NULL);
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j] = ft_substr(s, index, i - index);
			index = -1;
			j++;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
