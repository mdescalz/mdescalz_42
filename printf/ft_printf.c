/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:39:50 by mdescalz          #+#    #+#             */
/*   Updated: 2023/10/18 13:41:23 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_type(char format, va_list *ap)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_print_char(va_arg(*ap, int));
	else if (format == 's')
		count += ft_print_str(va_arg(*ap, char *));
	else if (format == 'p')
		count += ft_print_address(va_arg(*ap, void *));
	else if (format == 'd')
		count += ft_print_digit_10((va_arg(*ap, int)));
	else if (format == 'i')
		count += ft_print_digit_10((va_arg(*ap, int)));
	else if (format == 'u')
		count += ft_print_digit_10((va_arg(*ap, unsigned int)));
	else if (format == 'x')
		count += ft_print_digit_16(((va_arg(*ap, unsigned int))), 1);
	else if (format == 'X')
		count += ft_print_digit_16(((va_arg(*ap, unsigned int))), 0);
	else if (format == '%')
		count += ft_print_char('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;
	int		temp;

	va_start(ap, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			count += ft_format_type(*(++format), &ap);
			if (count == -1)
				return (-1);
		}
		else
		{
			if (write(1, format, 1) == -1)
				return (-1);
			count++;
		}
		format++;
	}
	va_end(ap);
	return (count);
}
