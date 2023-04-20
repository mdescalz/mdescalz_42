/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:27:25 by mdescalz          #+#    #+#             */
/*   Updated: 2023/04/20 15:53:43 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_strncpy(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	while (i < n)
	{
		s1[i] = '\0';
		i++;
	}
	return (s1);
}

int	ft_strlen(char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_strdup(char *src)
{
	char *dest;

	dest = (char *) malloc(sizeof(char *) * (ft_strlen(src) + 1));
	ft_strncpy(dest, src, ft_strlen(src));
	return (dest);
}

int	main(void)
{
	char source[] = "source\n";
	char *dup;

	dup = ft_strdup(source);
	printf("%s", dup);
	free (dup);
	return (0);
}
