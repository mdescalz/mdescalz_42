/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 17:18:54 by mdescalz          #+#    #+#             */
/*   Updated: 2023/04/10 16:48:55 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>
#include <stdio.h>*/
int	ft_str_is_printable(char *str)
{
	int	i;
	int	check;

	i = 0;
	check = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] < 127)
			i++;
		else
		{
			check = 0;
			i++;
		}
	}
	return (check);
}
/*int main(void)
{
    char    source[] = "";
    printf("%d", ft_str_is_printable(source));
}*/
