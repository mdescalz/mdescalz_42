/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 13:09:58 by mdescalz          #+#    #+#             */
/*   Updated: 2023/04/11 10:07:26 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n -1)
	{
		if (s1[i] - s2[i] > 0)
			return (s1[i] - s2[i]);
		if (s1[i] - s2[i] < 0)
			return (s1[i] - s2[i]);
		i++;
	}
	return (s2[i] - s1[i]);
}

int	main(void)
{
	char	string1[] = "zaaaaaaaa";
	char	string2[] = "zaaaaaaaa";
	unsigned	int number;

	number = 10;
	printf("%d", ft_strncmp(string1, string2, number));
}
