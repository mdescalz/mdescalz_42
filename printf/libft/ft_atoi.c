/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:11:44 by mdescalz          #+#    #+#             */
/*   Updated: 2023/10/11 12:16:40 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Converts the string argument str to an integer (type int).
Return Value: This function returns the converted integral number 
as an int value. If no valid conversion could be performed, it returns zero.*/

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == 45)
		sign = -1;
	if (*nptr == 43 || *nptr == 45)
		nptr++;
	while (*nptr >= 48 && *nptr <= 57)
	{
		result = result * 10 + *nptr - 48;
		nptr++;
	}
	return (result * sign);
}
