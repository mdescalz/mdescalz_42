/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:39:50 by mdescalz          #+#    #+#             */
/*   Updated: 2023/10/17 13:00:08 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_type(char format, va_list ap)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_print_char(va_arg(ap, int));
	else if (format == 's')
		count += ft_print_str(va_arg(ap, char *));
	else if (format == 'd')
		count += ft_print_digit_10((long)(va_arg(ap, int)));
	else if (format == 'i')
		count += ft_print_digit_10((long)(va_arg(ap, int)));
	else if (format == 'u')
		count += ft_print_digit_10((unsigned long)(va_arg(ap, unsigned int)));
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += ft_format_type(*format, ap);
		}
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(ap);
	return (count);
}

/*int	main(void)
{
	ft_printf("%d", '0');
}*/
