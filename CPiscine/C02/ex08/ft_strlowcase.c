/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 17:28:06 by mdescalz          #+#    #+#             */
/*   Updated: 2023/04/09 18:07:03 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>
#include <stdio.h>*/
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90))
			str[i] += 32;
		i++;
	}
	return (str);
}
/*int main(void)
{
    char    source[] = "AAAAABBBBBf1";
    printf("%s", ft_strlowcase(source));
}*/
