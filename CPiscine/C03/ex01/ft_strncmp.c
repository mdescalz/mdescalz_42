/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 13:09:58 by mdescalz          #+#    #+#             */
/*   Updated: 2023/04/13 13:22:00 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>
#include <stdio.h>*/
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
/*int	main(void)
{
	char	string1[] = "b";
	char	string2[] = "za";
	unsigned	int number;

	number = 10;
	printf("%d", ft_strncmp(string1, string2, number));
}*/
