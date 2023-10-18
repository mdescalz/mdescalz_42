/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digit_16.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:47:58 by mdescalz          #+#    #+#             */
/*   Updated: 2023/10/18 12:51:03 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_digit_16(unsigned long n, int check)
{
	int		count;
	char	*symbols;

	count = 0;
	if (check == 1)
		symbols = "0123456789abcdef";
	else if (check == 0)
		symbols = "0123456789ABCDEF";
	if (n >= 16)
	{
		count += ft_print_digit_16(n / 16, check);
		if (count == -1)
			return (-1);
		n = n % 16;
	}
	if (n >= 0 && n < 16)
	{
		count += write(1, &symbols[n], 1);
		if (count == -1)
			return (-1);
	}
	return (count);
}
