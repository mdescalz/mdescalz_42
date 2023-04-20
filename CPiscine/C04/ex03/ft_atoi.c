/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 11:00:19 by mdescalz          #+#    #+#             */
/*   Updated: 2023/04/17 10:24:44 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	number;
	int	even_odd;

	number = 0;
	even_odd = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == 43 || *str == 45)
	{
		if (*str == 45)
			even_odd++;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		number = number * 10;
		number = number + *str - 48;
		str++;
	}
	if (! (even_odd % 2))
		return (number);
	return (-number);
}
/*int	main(void)
{
	char string[] = " ---+--+1234ab567";
	printf("%d", ft_atoi(string));
}*/
