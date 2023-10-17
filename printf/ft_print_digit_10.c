/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digit_10.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:51:01 by mdescalz          #+#    #+#             */
/*   Updated: 2023/10/17 19:28:15 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_digit_10(long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count += ft_print_char('-');
		if (count == -1)
			return (-1);
		n = -n;
	}
	if (n >= 10)
	{
		count += ft_print_digit_10(n / 10);
		if (count == -1)
			return (-1);
		n = n % 10;
	}
	if (n < 10)
	{
		count += ft_print_char(n + '0');
		if (count == -1)
			return (-1);
	}
	return (count);
}
