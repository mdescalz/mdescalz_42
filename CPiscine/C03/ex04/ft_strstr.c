/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 13:11:17 by mdescalz          #+#    #+#             */
/*   Updated: 2023/04/13 18:03:37 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>
#include <stdio.h>
#include <string.h>*/
int	ft_strlen_to_find(char *to_find)
{
	unsigned int	i;

	i = 0;
	while (to_find[i] != '\0')
		i++;
	return (i);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n)
		i++;
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	n;

	n = ft_strlen_to_find(to_find);
	if (n == 0)
		return (str);
	while (*str != '\0')
	{
		if (ft_strncmp(str, to_find, n) == 0)
		{
			return (str);
		}
		str++;
	}
	return (0);
}
/*int	main(void)
{
	char	pajar[] = "i";
	char	aguja[] = "";

	printf("%s \n", ft_strstr(pajar, aguja));
	printf("%s \n", strstr(pajar, aguja));

}*/
