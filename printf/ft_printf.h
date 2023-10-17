/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:57:17 by mdescalz          #+#    #+#             */
/*   Updated: 2023/10/17 12:54:17 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int	ft_format_type(char format, va_list ap);
int	ft_printf(const char *format, ...);
int	ft_print_char(int c);
int	ft_print_str(char *str);
int	ft_print_digit_10(long n);

#endif